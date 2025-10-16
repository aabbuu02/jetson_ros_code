const CSVReader = require("csvtojson");
const path = require("path");
const csvFilePath = path.join(__dirname, "../", process.env.CSVFILENAME);

exports.getCSVData = async () => {
  try {
    return await CSVReader().fromFile(csvFilePath);
  } catch (error) {
    throw error;
  }
};
