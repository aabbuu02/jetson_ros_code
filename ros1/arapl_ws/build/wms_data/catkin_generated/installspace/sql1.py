#!/usr/bin/python

# header files for SQL data
import rospy
import sys
from std_msgs.msg import Bool
from wms_data.msg import WMSData
from wms_data.msg import WMSTasks
from wms_data.msg import Feedback
import uuid
import requests
import json
import logging
import traceback

#logging.basicConfig(
#    filename='/home/nvidia/Desktop/arapl_ws/src/wms_data/logs/wms.logs',
#    encoding='utf-8',
#    level=logging.DEBUG
#)

url = ""
updatecount = 0
failUpdatecount = 0
global lastUID
lastUID = ""
global lastAction
lastAction = -1
global idRecord
global actionRecord
global acr_shelfRecord
idRecord = ""
actionRecord = 0
acr_shelfRecord = 0

global updateFlag
updateFlag = True

WMS_pick_DataPub = rospy.Publisher('/wms_pick_tasks', WMSTasks, queue_size=1)
WMS_drop_DataPub = rospy.Publisher('/wms_drop_tasks', WMSTasks, queue_size=1)
WMS_statusPub = rospy.Publisher('/wms_status', Bool, queue_size=1)

####
# @brief API call for reading picking tasks
####


def readPickingData(url):
    wmsPickTaskArray = WMSTasks()

    unique_id = ""
    date = ""
    priority = 0
    rack = 0
    shelf = 0
    bin = 0
    action = 1
    status = 0
    failStatus = 0
    ean_code = ""
    putaway_code = ""
    acr_shelf = 0
    whole_bin_no = ""
    core = ""
    level = ""
    year = ""
    date_data = ""
    serial_no = ""

    # POST request
    try:
        print("requesting")

        response = requests.get(url + "getWMSPickDataNew")
        pickData = response.json()

        for i in pickData:
            wmsPickTask = WMSData()

            unique_id = str(i['Inst_Kid'])
            date = str(i['Inst_Date'])
            priority = int(i['Inst_Priority'])
            rack = int(i['Inst_RackNo'])
            shelf = int(i['Inst_ShelfNo'])
            bin = int(i['Inst_BinNo'])
            action = 1
            status = int(i['Inst_IsCompleted'])
            ean_code = str(i['Inst_EANCode'])
            putaway_code = str(i['Inst_PutawayBarcode'])

            if i['Inst_BotShelfNo'] in ("None", ""):
                acr_shelf = 0
            else:
                acr_shelf = int(i['Inst_BotShelfNo'])

            whole_bin_no = str(i['Inst_WholeBinNo'])
            core = "None"
            level = "None"
            year = "None"
            date_data = "None"
            serial_no = "None"

            wmsPickTask.unique_id = unique_id
            wmsPickTask.date = date
            wmsPickTask.priority = priority
            wmsPickTask.rack = rack
            wmsPickTask.shelf = 1 + (shelf % 10)
            wmsPickTask.bin = bin
            wmsPickTask.action = action
            wmsPickTask.ean_code = ean_code
            wmsPickTask.putaway_code = putaway_code
            wmsPickTask.whole_bin_no = whole_bin_no
            wmsPickTask.core = core
            wmsPickTask.level = level
            wmsPickTask.year = year
            wmsPickTask.date_data = date_data
            wmsPickTask.serial_no = serial_no
            wmsPickTask.status = status

            wmsPickTaskArray.tasks.append(wmsPickTask)

        WMS_pick_DataPub.publish(wmsPickTaskArray)
    except Exception:
        traceback.print_exc()
        rospy.logerr('/* pick task updating error */')
        pass


###
# @brief API call for reading dropping tasks
###


def readDropingData(url):
    wmsDropTaskArray = WMSTasks()

    try:
        response = requests.get(url + "getWMSDropDataNew")
        dropData = response.json()

        for i in dropData:
            wmsDropTask = WMSData()

            unique_id = str(i['Inst_Kid'])
            date = str(i['Inst_Date'])
            priority = int(i['Inst_ToPriority'])
            rack = int(i['Inst_ToRackNo'])
            shelf = int(i['Inst_ToShelfNo'])
            bin = int(i['Inst_ToBinNo'])
            action = 1
            status = int(i['Inst_ToIsCompleted'])
            ean_code = str(i['Inst_EANCode'])
            putaway_code = str(i['Inst_PutawayBarcode'])

            if i['Inst_BotShelfNo'] in ("None", ""):
                acr_shelf = 0
            else:
                acr_shelf = int(i['Inst_BotShelfNo'])

            whole_bin_no = str(i['Inst_ToWholeBinNo'])
            core = "None"
            level = "None"
            year = "None"
            date_data = "None"
            serial_no = "None"

            wmsDropTask.unique_id = unique_id
            wmsDropTask.date = date
            wmsDropTask.priority = priority
            wmsDropTask.rack = rack
            wmsDropTask.shelf = 1 + (shelf % 10)
            wmsDropTask.bin = bin
            wmsDropTask.action = action
            wmsDropTask.ean_code = ean_code
            wmsDropTask.putaway_code = putaway_code
            wmsDropTask.acr_shelf = acr_shelf
            wmsDropTask.whole_bin_no = whole_bin_no
            wmsDropTask.core = core
            wmsDropTask.level = level
            wmsDropTask.year = year
            wmsDropTask.date_data = date_data
            wmsDropTask.serial_no = serial_no
            wmsDropTask.status = status

            wmsDropTaskArray.tasks.append(wmsDropTask)

        WMS_drop_DataPub.publish(wmsDropTaskArray)
    except Exception:
        traceback.print_exc()
        rospy.logerr('/* Drop data updating failed */')
        pass


###
# @brief API call for updating tasks completion
###


def updateData(url, Inst_kid, action, botShelf):
    global actionRecord, updatecount, updateFlag, acr_shelfRecord, idRecord
    actionRecord = action
    idRecord = Inst_kid
    acr_shelfRecord = botShelf

    feedback = ""
    feedbackData = False
    uid = Inst_kid
    Action = int(action)
    BotShelf = str(botShelf)
    URL = url
    updateFlag = False

    rospy.loginfo("WMS update request received")

    try:
        url = url + "UpdateWMSData"
        payload = json.dumps({
            "Kid": uid,
            "BotShelf": BotShelf,
            "Action": Action
        })
        headers = {'Content-Type': 'application/json'}

        response = requests.request("POST", url, headers=headers, data=payload)
        print(response.text)

        feedback = response.text
        rospy.loginfo("feedback -----------------------")
        rospy.loginfo(uid)
        rospy.loginfo(feedback)

        if feedback == "success":
            feedbackData = True
            rospy.loginfo("Received True from WMS after update")
            updateFlag = True
            WMS_statusPub.publish(feedbackData)
        else:
            feedbackData = False
            rospy.loginfo("Received False from WMS after update")
            rospy.loginfo(uid)

    except Exception:
        rospy.logerr('/* Lifter Feedback error */')
        logging.debug('/* lifter Feedback communication */')
        pass

    WMS_statusPub.publish(feedbackData)
    logging.debug(f'unique id = {uid}')
    logging.debug(f'Action = {Action}')
    logging.debug(f'feedback = {feedback}')


def liftFeedbackCallback(feedbackMsg):
    global url, instructionIsCompleted, botShelf, action, failStatus
    global updatecount, failUpdatecount, lastUID, lastAction

    updatecount = 0
    failUpdatecount = 0
    instructionIsCompleted = 0
    action = -1
    botShelf = 0
    failStatus = 0

    Inst_kid = feedbackMsg.unique_id
    print(Inst_kid)
    action = feedbackMsg.action
    print(action)
    botShelf = feedbackMsg.acr_shelf
    print(botShelf)
    instructionIsCompleted = feedbackMsg.status
    print(instructionIsCompleted)
    failStatus = feedbackMsg.failStatus

    if ((instructionIsCompleted == 1 and failStatus == 0)
            and (lastUID != Inst_kid or lastAction != action)):
        if (action == 1 and botShelf != 0) or action == 0:
            lastUID = Inst_kid
            lastAction = action
            updateData(url, Inst_kid, action, botShelf)
    elif instructionIsCompleted == 1 and failStatus == 1:
        failUpdateData(url, Inst_kid, action)


def failUpdateData(url, Inst_kid, action):
    global failUpdatecount
    error = ""
    feedback = ""
    feedbackData = False
    uid = Inst_kid
    Action = int(action)
    URL = url
    url = "http://127.0.0.1:3333/"

    if action in [0, 1]:
        error = "unable to scan bin barcode"

    try:
        payload = f"""<?xml version="1.0" encoding="utf-8"?>
        <soap:Envelope xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xmlns:xsd="http://www.w3.org/2001/XMLSchema" xmlns:soap="http://schemas.xmlsoap.org/soap/envelope/">
        <soap:Body>
        <UpdateBOTErrorLogData xmlns="http://tempuri.org/">
        <Kid>{uid}</Kid>
        <Remarks>{error}</Remarks>
        </UpdateBOTErrorLogData>
        </soap:Body>
        </soap:Envelope>"""

        headers = {'Content-Type': 'text/xml; charset=utf-8'}

        response = requests.request(
            "POST", url, headers=headers, data=payload, timeout=10
        )

        delimiter1 = "UpdateBOTErrorLogDataResult"
        delimiter2 = "</UpdateBOTErrorLogDataResult>"
        message = response.content
        feedback = extractFeedback(message, delimiter1, delimiter2)

        if feedback == "true":
            feedbackData = True
            WMS_statusPub.publish(feedbackData)
        else:
            feedbackData = False
    except Exception:
        rospy.logerr('/* Update checking failed */')
        pass


def extractFeedback(message, delimiter1, delimiter2):
    idx1 = message.index(delimiter1)
    idx2 = message.index(delimiter2)
    res = ''
    for idx in range(idx1 + len(delimiter1) + 1, idx2):
        res = res + message[idx]
    print("wms feedback : " + res)
    return str(res)


def convertToJson(data, delimiter1, delimiter2):
    idx1 = data.index(delimiter1)
    idx2 = data.index(delimiter2)
    res = ''
    for idx in range(idx1 + len(delimiter1) + 1, idx2):
        res = res + data[idx]
    jsondata = json.loads(res)
    return jsondata


def dataPublisherAndSubscriber():
    global url, updateFlag
    url = "http://localhost:3333/"
    rospy.Subscriber("/lifterFeedback", Feedback, liftFeedbackCallback)
    rospy.init_node('wms_database_node', anonymous=True)
    rate = rospy.Rate(1)

    while not rospy.is_shutdown():
        if not updateFlag:
            rospy.sleep(1)
            rospy.loginfo("Updating WMS failed, retrying")
            updateData(url, idRecord, actionRecord, acr_shelfRecord)

        readPickingData(url)
        readDropingData(url)
        rospy.loginfo("info message")
        rate.sleep()


if __name__ == "__main__":
    try:
        print("wmsDatabase node started")
        dataPublisherAndSubscriber()
    except rospy.ROSInterruptException:
        pass

