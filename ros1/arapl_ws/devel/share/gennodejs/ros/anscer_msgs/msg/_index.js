
"use strict";

let StaticLidar = require('./StaticLidar.js');
let ControllerMode = require('./ControllerMode.js');
let TransitionInfo = require('./TransitionInfo.js');
let KeyValue = require('./KeyValue.js');
let Paths = require('./Paths.js');
let ACRControl = require('./ACRControl.js');
let BatteryInfo = require('./BatteryInfo.js');
let ScanPoints = require('./ScanPoints.js');
let MissionDB = require('./MissionDB.js');
let Feedback = require('./Feedback.js');
let MotorStatusFlags = require('./MotorStatusFlags.js');
let DockingDebug = require('./DockingDebug.js');
let ProximitySensors = require('./ProximitySensors.js');
let BatteryState = require('./BatteryState.js');
let IndividualProhibition = require('./IndividualProhibition.js');
let DockInfo = require('./DockInfo.js');
let ZonePoints = require('./ZonePoints.js');
let Sequence = require('./Sequence.js');
let Pose = require('./Pose.js');
let TransitionZones = require('./TransitionZones.js');
let ChargeInfo = require('./ChargeInfo.js');
let Task = require('./Task.js');
let MotorDiagnostics = require('./MotorDiagnostics.js');
let MotorDiagnosticsArray = require('./MotorDiagnosticsArray.js');
let BumperState = require('./BumperState.js');
let SafetyZone = require('./SafetyZone.js');
let BatteryDB = require('./BatteryDB.js');
let FieldStatus = require('./FieldStatus.js');
let StaticLidars = require('./StaticLidars.js');
let WaypointsArray = require('./WaypointsArray.js');
let WaypointArray = require('./WaypointArray.js');
let SafetyField = require('./SafetyField.js');
let MissionInfo = require('./MissionInfo.js');
let MissionData = require('./MissionData.js');
let Indication = require('./Indication.js');
let KeyValues = require('./KeyValues.js');
let ZoneInformation = require('./ZoneInformation.js');
let MotorFaultFlags = require('./MotorFaultFlags.js');
let SafetyFields = require('./SafetyFields.js');
let Path = require('./Path.js');
let ScanPoint = require('./ScanPoint.js');
let ZoneInfo = require('./ZoneInfo.js');
let Info = require('./Info.js');
let PGVPose = require('./PGVPose.js');
let Delay = require('./Delay.js');
let Debug = require('./Debug.js');
let Waypoint = require('./Waypoint.js');
let LiftActionGoal = require('./LiftActionGoal.js');
let ErrorGoal = require('./ErrorGoal.js');
let ProcessResult = require('./ProcessResult.js');
let ACRModuleActionResult = require('./ACRModuleActionResult.js');
let MoveResult = require('./MoveResult.js');
let MissionResult = require('./MissionResult.js');
let MissionGoal = require('./MissionGoal.js');
let MissionFeedback = require('./MissionFeedback.js');
let WaitActionResult = require('./WaitActionResult.js');
let ACRModuleGoal = require('./ACRModuleGoal.js');
let WaitActionGoal = require('./WaitActionGoal.js');
let MissionActionGoal = require('./MissionActionGoal.js');
let ProcessFeedback = require('./ProcessFeedback.js');
let MissionActionResult = require('./MissionActionResult.js');
let ProcessActionFeedback = require('./ProcessActionFeedback.js');
let LiftFeedback = require('./LiftFeedback.js');
let ChargeGoal = require('./ChargeGoal.js');
let ChargeAction = require('./ChargeAction.js');
let ACRModuleFeedback = require('./ACRModuleFeedback.js');
let ProcessAction = require('./ProcessAction.js');
let LiftGoal = require('./LiftGoal.js');
let ProcessActionGoal = require('./ProcessActionGoal.js');
let MoveActionGoal = require('./MoveActionGoal.js');
let ChargeFeedback = require('./ChargeFeedback.js');
let ChargeResult = require('./ChargeResult.js');
let MissionActionFeedback = require('./MissionActionFeedback.js');
let ErrorAction = require('./ErrorAction.js');
let ACRModuleResult = require('./ACRModuleResult.js');
let ChargeActionResult = require('./ChargeActionResult.js');
let MoveGoal = require('./MoveGoal.js');
let LiftActionResult = require('./LiftActionResult.js');
let ACRModuleAction = require('./ACRModuleAction.js');
let ErrorActionFeedback = require('./ErrorActionFeedback.js');
let ProcessGoal = require('./ProcessGoal.js');
let MoveFeedback = require('./MoveFeedback.js');
let ACRModuleActionGoal = require('./ACRModuleActionGoal.js');
let WaitGoal = require('./WaitGoal.js');
let ACRModuleActionFeedback = require('./ACRModuleActionFeedback.js');
let LiftAction = require('./LiftAction.js');
let ChargeActionGoal = require('./ChargeActionGoal.js');
let ErrorActionGoal = require('./ErrorActionGoal.js');
let ChargeActionFeedback = require('./ChargeActionFeedback.js');
let ProcessActionResult = require('./ProcessActionResult.js');
let ErrorResult = require('./ErrorResult.js');
let WaitFeedback = require('./WaitFeedback.js');
let LiftActionFeedback = require('./LiftActionFeedback.js');
let MoveActionResult = require('./MoveActionResult.js');
let LiftResult = require('./LiftResult.js');
let WaitActionFeedback = require('./WaitActionFeedback.js');
let ErrorFeedback = require('./ErrorFeedback.js');
let MoveAction = require('./MoveAction.js');
let MoveActionFeedback = require('./MoveActionFeedback.js');
let WaitAction = require('./WaitAction.js');
let ErrorActionResult = require('./ErrorActionResult.js');
let MissionAction = require('./MissionAction.js');
let WaitResult = require('./WaitResult.js');

module.exports = {
  StaticLidar: StaticLidar,
  ControllerMode: ControllerMode,
  TransitionInfo: TransitionInfo,
  KeyValue: KeyValue,
  Paths: Paths,
  ACRControl: ACRControl,
  BatteryInfo: BatteryInfo,
  ScanPoints: ScanPoints,
  MissionDB: MissionDB,
  Feedback: Feedback,
  MotorStatusFlags: MotorStatusFlags,
  DockingDebug: DockingDebug,
  ProximitySensors: ProximitySensors,
  BatteryState: BatteryState,
  IndividualProhibition: IndividualProhibition,
  DockInfo: DockInfo,
  ZonePoints: ZonePoints,
  Sequence: Sequence,
  Pose: Pose,
  TransitionZones: TransitionZones,
  ChargeInfo: ChargeInfo,
  Task: Task,
  MotorDiagnostics: MotorDiagnostics,
  MotorDiagnosticsArray: MotorDiagnosticsArray,
  BumperState: BumperState,
  SafetyZone: SafetyZone,
  BatteryDB: BatteryDB,
  FieldStatus: FieldStatus,
  StaticLidars: StaticLidars,
  WaypointsArray: WaypointsArray,
  WaypointArray: WaypointArray,
  SafetyField: SafetyField,
  MissionInfo: MissionInfo,
  MissionData: MissionData,
  Indication: Indication,
  KeyValues: KeyValues,
  ZoneInformation: ZoneInformation,
  MotorFaultFlags: MotorFaultFlags,
  SafetyFields: SafetyFields,
  Path: Path,
  ScanPoint: ScanPoint,
  ZoneInfo: ZoneInfo,
  Info: Info,
  PGVPose: PGVPose,
  Delay: Delay,
  Debug: Debug,
  Waypoint: Waypoint,
  LiftActionGoal: LiftActionGoal,
  ErrorGoal: ErrorGoal,
  ProcessResult: ProcessResult,
  ACRModuleActionResult: ACRModuleActionResult,
  MoveResult: MoveResult,
  MissionResult: MissionResult,
  MissionGoal: MissionGoal,
  MissionFeedback: MissionFeedback,
  WaitActionResult: WaitActionResult,
  ACRModuleGoal: ACRModuleGoal,
  WaitActionGoal: WaitActionGoal,
  MissionActionGoal: MissionActionGoal,
  ProcessFeedback: ProcessFeedback,
  MissionActionResult: MissionActionResult,
  ProcessActionFeedback: ProcessActionFeedback,
  LiftFeedback: LiftFeedback,
  ChargeGoal: ChargeGoal,
  ChargeAction: ChargeAction,
  ACRModuleFeedback: ACRModuleFeedback,
  ProcessAction: ProcessAction,
  LiftGoal: LiftGoal,
  ProcessActionGoal: ProcessActionGoal,
  MoveActionGoal: MoveActionGoal,
  ChargeFeedback: ChargeFeedback,
  ChargeResult: ChargeResult,
  MissionActionFeedback: MissionActionFeedback,
  ErrorAction: ErrorAction,
  ACRModuleResult: ACRModuleResult,
  ChargeActionResult: ChargeActionResult,
  MoveGoal: MoveGoal,
  LiftActionResult: LiftActionResult,
  ACRModuleAction: ACRModuleAction,
  ErrorActionFeedback: ErrorActionFeedback,
  ProcessGoal: ProcessGoal,
  MoveFeedback: MoveFeedback,
  ACRModuleActionGoal: ACRModuleActionGoal,
  WaitGoal: WaitGoal,
  ACRModuleActionFeedback: ACRModuleActionFeedback,
  LiftAction: LiftAction,
  ChargeActionGoal: ChargeActionGoal,
  ErrorActionGoal: ErrorActionGoal,
  ChargeActionFeedback: ChargeActionFeedback,
  ProcessActionResult: ProcessActionResult,
  ErrorResult: ErrorResult,
  WaitFeedback: WaitFeedback,
  LiftActionFeedback: LiftActionFeedback,
  MoveActionResult: MoveActionResult,
  LiftResult: LiftResult,
  WaitActionFeedback: WaitActionFeedback,
  ErrorFeedback: ErrorFeedback,
  MoveAction: MoveAction,
  MoveActionFeedback: MoveActionFeedback,
  WaitAction: WaitAction,
  ErrorActionResult: ErrorActionResult,
  MissionAction: MissionAction,
  WaitResult: WaitResult,
};
