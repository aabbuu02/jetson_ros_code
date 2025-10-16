const CSVWriter = require("json-2-csv");
const path = require("path");
const fs = require("fs");
const csvFilePath = path.join(__dirname, "../", process.env.CSVFILENAME);

exports.saveAsCSVData = async (jsondata) => {
  try {
    const csvdata = await CSVWriter.json2csvAsync(jsondata);
    fs.writeFileSync(csvFilePath, csvdata);
  } catch (error) {
    console.log(error);
    throw error;
  }
};
