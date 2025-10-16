#!/usr/bin/env python3
from flask import Flask, jsonify, request
from datetime import datetime
import logging

app = Flask(__name__)
logging.basicConfig(level=logging.INFO, format='[%(levelname)s] %(message)s')

pick_tasks = [{
    "Inst_Kid": "PICK001",
    "Inst_Date": datetime.now().strftime("%Y-%m-%d"),
    "Inst_Priority": 1,
    "Inst_RackNo": 1,
    "Inst_ShelfNo": 5,
    "Inst_BinNo": 3,
    "Inst_IsCompleted": False,
    "Inst_EANCode": "1234567890123",
    "Inst_PutawayBarcode": "PUT001",
    "Inst_BotShelfNo": "0",
    "Inst_WholeBinNo": "R01-S05-B03"
}]

drop_tasks = [{
    "Inst_Kid": "DROP001",
    "Inst_Date": datetime.now().strftime("%Y-%m-%d"),
    "Inst_ToPriority": 1,
    "Inst_ToRackNo": 2,
    "Inst_ToShelfNo": 3,
    "Inst_ToBinNo": 1,
    "Inst_ToIsCompleted": False,
    "Inst_EANCode": "1234567890123",
    "Inst_PutawayBarcode": "PUT001",
    "Inst_BotShelfNo": "0",
    "Inst_ToWholeBinNo": "R02-S03-B01"
}]

@app.route('/', methods=['GET'])
def health():
    return jsonify({"status": "ok", "timestamp": datetime.now().isoformat()})

@app.route('/getWMSPickDataNew', methods=['GET'])
def get_pick_data():
    app.logger.info("Returning pick tasks")
    return jsonify(pick_tasks)

@app.route('/getWMSDropDataNew', methods=['GET'])
def get_drop_data():
    app.logger.info("Returning drop tasks")
    return jsonify(drop_tasks)

@app.route('/UpdateWMSData', methods=['POST'])
def update_wms_data():
    app.logger.info(f"Update received: {request.json}")
    return jsonify({"status": "success"})

if __name__ == '__main__':
    print("WMS Mock Server starting on http://0.0.0.0:3333")
    app.run(host='0.0.0.0', port=3333, debug=False)
