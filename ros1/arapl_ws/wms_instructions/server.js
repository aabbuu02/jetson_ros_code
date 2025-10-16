const express = require("express");
const bodyParser = require("body-parser");
const app = express();
const dotenv = require("dotenv");
dotenv.config();
const port = process.env.PORT;

var cors = require("cors");
app.use(cors());

const CSVModel = require("./api/csv_model");
app.use(bodyParser.json());

app.use(express.static("web"));

app.get("/shouldResetInstructions", async (req, res) => {
  let instructions = await CSVModel.resetInstructions();
  res.send(instructions);
});

app.get("/getWMSInstructions", async (req, res) => {
  let instructions = await CSVModel.getWMSInstructions();
  res.send(instructions);
});

app.get("/getWMSPickDataNew", async (req, res) => {
  let instructions = await CSVModel.getWMSPickDataNew();
  res.send(instructions);
});

app.get("/getWMSDropDataNew", async (req, res) => {
  let instructions = await CSVModel.getWMSDropDataNew();
  res.send(instructions);
});

{
  /* <Kid>{}</Kid>
<BotShelf>{}</BotShelf>
<Action>{}</Action> 1=pick 0=drop */
}
app.post("/UpdateWMSData", async (req, res) => {
  let status = await CSVModel.UpdateWMSData(req.body);
  //console.log(await CSVModel.resetInstructions());
  res.send(status);
});

app.listen(port, () => {
  console.log(`Example app listening on port ${port}`);
});
