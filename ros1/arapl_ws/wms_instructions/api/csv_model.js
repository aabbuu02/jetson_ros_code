const CSVReader = require("./csv_reader");
const CSVWriter = require("./csv_writer");

// const pickDataType = {
//   Inst_Kid: "",
//   Inst_Date: "",
//   Inst_Priority: "",
//   Inst_RackNo: "",
//   Inst_ShelfNo: "",
//   Inst_BinNo: "",
//   Inst_IsCompleted: "",
//   Inst_EANCode: "",
//   Inst_PutawayBarcode: "",
//   Inst_BotShelfNo: "",
//   Inst_WholeBinNo: "",
// };

// const dropDataType = {
//   Inst_Kid: "",
//   Inst_Date: "",
//   Inst_ToPriority: "",
//   Inst_ToRackNo: "",
//   Inst_ToShelfNo: "",
//   Inst_ToBinNo: "",
//   Inst_ToIsCompleted: "",
//   Inst_EANCode: "",
//   Inst_PutawayBarcode: "",
//   Inst_BotShelfNo: "",
//   Inst_ToWholeBinNo: "",
// };

exports.getWMSInstructions = async () => {
  try {
    const allInst = await CSVReader.getCSVData();
    let transformedInst = [];
    allInst.map((inst, index) => {
      transformedInst.push({
        sl_no: index + 1,
        id: inst.Inst_Kid,
        priority: inst.Inst_Priority,
        item_code: inst.Inst_ItemCode,
        pick_location: inst.Inst_WholeBinNo,
        pick_completed: inst.Inst_IsCompleted,
        robot_shelf_no: inst.Inst_BotShelfNo,
        drop_location: inst.Inst_ToWholeBinNo,
        drop_completed: inst.Inst_ToIsCompleted,
      });
    });
    return transformedInst;
  } catch (error) {
    throw error;
  }
};

exports.shouldResetInstructions = async () => {
  try {
    const allInst = await CSVReader.getCSVData();
    let completedInstCount = 0;
    allInst.map((inst, index) => {
      if (inst.Inst_IsCompleted == 1 && inst.Inst_ToIsCompleted == 1) {
        completedInstCount = completedInstCount + 1;
      }
    });
    console.log(allInst.length, completedInstCount);
    return {
      shouldReset: allInst.length == completedInstCount ? true : false,
      inst: allInst,
    };
  } catch (error) {
    throw error;
  }
};

exports.writeOrders = async () => {
  try {
    await CSVWriter.saveAsCSVData([]);
    await CSVWriter.saveAsCSVData(require("../data/orders.json"));
  } catch (error) {
    throw error;
  }
};

exports.writeResidue = async () => {
  try {
    await CSVWriter.saveAsCSVData([]);
    await CSVWriter.saveAsCSVData(require("../data/residue.json"));
  } catch (error) {
    throw error;
  }
};

exports.resetInstructions = async () => {
  try {
    let resetInst = await this.shouldResetInstructions();
    let existingInstType = "";
    if (resetInst.shouldReset) {
      const allInst = resetInst.inst;
      if (
        allInst[allInst.length - 1].Inst_RackNo == process.env.STORAGERACKNO
      ) {
        existingInstType = "orders";
        newInstType = "residue";
        this.writeResidue();
      }
      if (
        allInst[allInst.length - 1].Inst_RackNo == process.env.PICKZONERACKNO
      ) {
        existingInstType = "residue";
        newInstType = "orders";
        this.writeOrders();
      }
      return {
        shouldReset: resetInst.shouldReset,
        existingInstType,
        newInstType,
      };
    } else {
      return {
        shouldReset: resetInst.shouldReset,
        message:
          "Existing instructions are not completed, reset cannot be done.",
      };
    }
  } catch (error) {
    throw error;
  }
};

exports.getWMSPickDataNew = async () => {
  try {
    const allInst = await CSVReader.getCSVData();
    return allInst.filter((inst) => {
      return inst.Inst_IsCompleted == 0 && inst.Inst_ToIsCompleted == 0;
    });
  } catch (error) {
    throw error;
  }
};

exports.getWMSDropDataNew = async () => {
  try {
    const allInst = await CSVReader.getCSVData();
    return allInst.filter((inst) => {
      return inst.Inst_IsCompleted == 1 && inst.Inst_ToIsCompleted == 0;
    });
  } catch (error) {
    throw error;
  }
};

exports.UpdateWMSData = async (body) => {
  try {
    console.log(">>> body", body);
    const allInst = await CSVReader.getCSVData();
    let instIndexToUpdate = null;
    allInst.map((inst, index) => {
      if (inst.Inst_Kid == body.Kid) instIndexToUpdate = index;
    });
    console.log(">>> instIndex", instIndexToUpdate);

    allInst[instIndexToUpdate].Inst_BotShelfNo = body.BotShelf;
    if (body.Action == 1) allInst[instIndexToUpdate].Inst_IsCompleted = 1;
    if (body.Action == 0) allInst[instIndexToUpdate].Inst_ToIsCompleted = 1;

    console.log(">>> Inst_Kid", allInst[instIndexToUpdate].Inst_Kid);
    console.log(
      ">>> Inst_IsCompleted",
      allInst[instIndexToUpdate].Inst_IsCompleted
    );
    console.log(
      ">>> Inst_ToIsCompleted",
      allInst[instIndexToUpdate].Inst_ToIsCompleted
    );
    await CSVWriter.saveAsCSVData(allInst);
    return "success";
  } catch (error) {
    console.log(error.toString());
    return "error";
  }
};
