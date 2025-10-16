#include "graph_creator_rviz_plugin/graph_creator_panel.hpp"
#include <pluginlib/class_list_macros.hpp>
#include <sstream>

PLUGINLIB_EXPORT_CLASS(graph_creator_rviz_plugin::GraphCreatorPanel, rviz_common::Panel)

namespace graph_creator_rviz_plugin
{

GraphCreatorPanel::GraphCreatorPanel(QWidget* parent)
  : rviz_common::Panel(parent), m_ui_ptr(new Ui::graphCreatorPanelForm())
{
  m_ui_ptr->setupUi(this);
  m_ui_ptr->createVerticesPushButton->setCheckable(true);
  m_ui_ptr->createVerticesPushButton->setChecked(true);
  m_ui_ptr->createEdgesPushButton->setCheckable(true);
  m_ui_ptr->createEdgesPushButton->setChecked(false);

  connect(m_ui_ptr->createVerticesPushButton, &QPushButton::clicked, 
          this, &GraphCreatorPanel::onCreateVerticesClicked);
  connect(m_ui_ptr->createEdgesPushButton, &QPushButton::clicked, 
          this, &GraphCreatorPanel::onCreateEdgesClicked);
  connect(m_ui_ptr->edgeCreationTypeComboBox, QOverload<int>::of(&QComboBox::currentIndexChanged), 
          this, &GraphCreatorPanel::onEdgeCreationTypeIndexChanged);
  connect(m_ui_ptr->edgeDirectionTypeComboBox, QOverload<int>::of(&QComboBox::currentIndexChanged), 
          this, &GraphCreatorPanel::onEdgeDirectionTypeIndexChanged);
  connect(m_ui_ptr->lockVerticesCheckBox, &QCheckBox::clicked, 
          this, &GraphCreatorPanel::onLockAllVerticesClicked);
  connect(m_ui_ptr->lockEdgesCheckBox, &QCheckBox::clicked, 
          this, &GraphCreatorPanel::onLockAllEdgesClicked);
  connect(m_ui_ptr->graphElementTableWidget, &QTableWidget::itemChanged, 
          this, &GraphCreatorPanel::ongraphElementTableValueChanged);
  connect(m_ui_ptr->graphAppTypeComboBox, QOverload<int>::of(&QComboBox::currentIndexChanged), 
          this, &GraphCreatorPanel::onOperateOnAppTypeIndexChanged);
  connect(m_ui_ptr->loadGraphPushButton, &QPushButton::clicked, 
          this, &GraphCreatorPanel::onLoadGraphClicked);
  connect(m_ui_ptr->saveGraphPushButton, &QPushButton::clicked, 
          this, &GraphCreatorPanel::onSaveGraphClicked);
  connect(m_ui_ptr->refreshButton, &QPushButton::clicked, 
          this, &GraphCreatorPanel::onRefreshClicked);
}

GraphCreatorPanel::~GraphCreatorPanel()
{
  delete m_ui_ptr;
}

void GraphCreatorPanel::onInitialize()
{
  auto raw_node = getDisplayContext()->getRosNodeAbstraction().lock()->get_raw_node();
  node_ = raw_node;

  if (!node_)
  {
    return;
  }

#ifdef HAS_GRAPH_MSGS
  m_updated_vertex_pub = node_->create_publisher<graph_msgs::msg::Vertex>(
    "graph_creator/updates/vertex", rclcpp::QoS(1).transient_local());
  m_updated_edge_pub = node_->create_publisher<graph_msgs::msg::Edge>(
    "graph_creator/updates/edge", rclcpp::QoS(1).transient_local());

  m_current_vertex_sub = node_->create_subscription<graph_msgs::msg::Vertex>(
    "graph_creator/current/vertex", 1,
    std::bind(&GraphCreatorPanel::currentVertexCallback, this, std::placeholders::_1));
  m_current_edge_sub = node_->create_subscription<graph_msgs::msg::Edge>(
    "graph_creator/current/edge", 1,
    std::bind(&GraphCreatorPanel::currentEdgeCallback, this, std::placeholders::_1));
#else
  m_updated_vertex_pub = node_->create_publisher<std_msgs::msg::String>(
    "graph_creator/updates/vertex", 1);
  m_updated_edge_pub = node_->create_publisher<std_msgs::msg::String>(
    "graph_creator/updates/edge", 1);
  m_current_vertex_sub = node_->create_subscription<std_msgs::msg::String>(
    "graph_creator/current/vertex", 1,
    std::bind(&GraphCreatorPanel::currentVertexCallback, this, std::placeholders::_1));
  m_current_edge_sub = node_->create_subscription<std_msgs::msg::String>(
    "graph_creator/current/edge", 1,
    std::bind(&GraphCreatorPanel::currentEdgeCallback, this, std::placeholders::_1));
#endif

#ifdef HAS_GRAPH_CREATOR_MSGS
  m_gc_state_sub = node_->create_subscription<graph_creator_msgs::msg::GraphCreatorState>(
    "graph_creator/current_state", 1,
    std::bind(&GraphCreatorPanel::currentGraphCreatorStateCallback, this, std::placeholders::_1));

  m_set_gc_mode_clt = node_->create_client<graph_creator_msgs::srv::SetGraphCreatorMode>(
    "graph_creator/set_mode");
  m_get_gc_state_clt = node_->create_client<graph_creator_msgs::srv::GetGraphCreatorState>(
    "graph_creator/get_state");
#else
  m_gc_state_sub = node_->create_subscription<std_msgs::msg::String>(
    "graph_creator/current_state", 1,
    std::bind(&GraphCreatorPanel::currentGraphCreatorStateCallback, this, std::placeholders::_1));
#endif

  m_set_vert_lck_clt = node_->create_client<std_srvs::srv::SetBool>(
    "graph_creator/set_vertices_locked");
  m_set_edge_lck_clt = node_->create_client<std_srvs::srv::SetBool>(
    "graph_creator/set_edges_locked");

#ifdef HAS_GRAPH_MSGS
  m_load_graph_creator_clt = node_->create_client<graph_msgs::srv::LoadGraph>(
    "graph_creator/load_graph");
  m_save_graph_creator_clt = node_->create_client<graph_msgs::srv::SaveGraph>(
    "graph_creator/save_graph");
  m_load_graph_server_clt = node_->create_client<graph_msgs::srv::LoadGraph>(
    "load_graph");
#endif

  RCLCPP_INFO(node_->get_logger(), "Graph Creator Panel initialized");
}

// Callbacks
#ifdef HAS_GRAPH_MSGS
void GraphCreatorPanel::currentVertexCallback(const graph_msgs::msg::Vertex::SharedPtr vertex_msg)
{
  m_cur_graph_elem_type = GRAPH_ELEMENT_VERTEX;
  createVertexTable(*vertex_msg);
}

void GraphCreatorPanel::currentEdgeCallback(const graph_msgs::msg::Edge::SharedPtr edge_msg)
{
  m_cur_graph_elem_type = GRAPH_ELEMENT_EDGE;
  createEdgeTable(*edge_msg);
}

void GraphCreatorPanel::createVertexTable(const graph_msgs::msg::Vertex& vertex_msg)
{
  RCLCPP_INFO(node_->get_logger(), "Received vertex: %s (ID: %u)", vertex_msg.name.c_str(), vertex_msg.id);

  m_cur_vertex_msg = vertex_msg;
  
  for (int row : m_delegate_rows)
  {
    m_ui_ptr->graphElementTableWidget->setItemDelegateForRow(row, nullptr);
  }
  m_delegate_rows.clear();

  m_ui_ptr->graphElementTableWidget->clear();
  m_ui_ptr->graphElementTypeLabel->setText("Vertex");
  m_ui_ptr->graphElementTableWidget->blockSignals(true);
  m_ui_ptr->graphElementTableWidget->setRowCount(6);
  m_ui_ptr->graphElementTableWidget->setColumnCount(2);
  m_ui_ptr->graphElementTableWidget->setHorizontalHeaderLabels({"Field", "Value"});

  // Row 0: ID
  m_ui_ptr->graphElementTableWidget->setItem(0, 0, new QTableWidgetItem("ID"));
  m_ui_ptr->graphElementTableWidget->setItem(0, 1, 
    new QTableWidgetItem(QString::number(vertex_msg.id)));
  m_ui_ptr->graphElementTableWidget->item(0, 1)->setFlags(Qt::ItemIsEnabled);

  // Row 1: Name
  m_ui_ptr->graphElementTableWidget->setItem(1, 0, new QTableWidgetItem("Name"));
  m_ui_ptr->graphElementTableWidget->setItem(1, 1, 
    new QTableWidgetItem(QString::fromStdString(vertex_msg.name)));

  // Row 2: Type
  m_ui_ptr->graphElementTableWidget->setItem(2, 0, new QTableWidgetItem("Type"));
  ComboBoxItemDelegate* type_delegate = new ComboBoxItemDelegate(this);
  type_delegate->addItemsToComboBox(m_vertex_types);
  type_delegate->setCurrentItemInComboBox(vertex_msg.type);
  m_ui_ptr->graphElementTableWidget->setItemDelegateForRow(2, type_delegate);
  m_ui_ptr->graphElementTableWidget->setItem(2, 1, 
    new QTableWidgetItem(QString::fromStdString(m_vertex_types[vertex_msg.type])));
  m_delegate_rows.insert(2);

  // Row 3: X Position
  m_ui_ptr->graphElementTableWidget->setItem(3, 0, new QTableWidgetItem("X"));
  DoubleSpinBoxDelegate* x_delegate = new DoubleSpinBoxDelegate(this);
  x_delegate->setDoubleSpinBoxProperties(-1000.0, 1000.0, 4, 0.1);
  x_delegate->setCurrentValue(vertex_msg.pose.position.x);
  m_ui_ptr->graphElementTableWidget->setItemDelegateForRow(3, x_delegate);
  m_ui_ptr->graphElementTableWidget->setItem(3, 1, 
    new QTableWidgetItem(QString::number(vertex_msg.pose.position.x, 'f', 4)));
  m_delegate_rows.insert(3);

  // Row 4: Y Position
  m_ui_ptr->graphElementTableWidget->setItem(4, 0, new QTableWidgetItem("Y"));
  DoubleSpinBoxDelegate* y_delegate = new DoubleSpinBoxDelegate(this);
  y_delegate->setDoubleSpinBoxProperties(-1000.0, 1000.0, 4, 0.1);
  y_delegate->setCurrentValue(vertex_msg.pose.position.y);
  m_ui_ptr->graphElementTableWidget->setItemDelegateForRow(4, y_delegate);
  m_ui_ptr->graphElementTableWidget->setItem(4, 1, 
    new QTableWidgetItem(QString::number(vertex_msg.pose.position.y, 'f', 4)));
  m_delegate_rows.insert(4);

  // Row 5: Properties
  m_ui_ptr->graphElementTableWidget->setItem(5, 0, new QTableWidgetItem("Properties"));
  PropertiesDialogItemDelegate* prop_delegate = new PropertiesDialogItemDelegate(this);
  for (const auto& prop : vertex_msg.properties)
  {
    prop_delegate->addKeyValueProperty(prop.key, prop.value);
  }
  m_ui_ptr->graphElementTableWidget->setItemDelegateForRow(5, prop_delegate);
  m_ui_ptr->graphElementTableWidget->setItem(5, 1, 
    new QTableWidgetItem(QString("Properties (%1)").arg(vertex_msg.properties.size())));
  m_delegate_rows.insert(5);

  m_ui_ptr->graphElementTableWidget->resizeColumnsToContents();
  m_ui_ptr->graphElementTableWidget->blockSignals(false);
}

void GraphCreatorPanel::createEdgeTable(const graph_msgs::msg::Edge& edge_msg)
{
  RCLCPP_INFO(node_->get_logger(), "Received edge: %s", edge_msg.name.c_str());

  m_cur_edge_msg = edge_msg;

  for (int row : m_delegate_rows)
  {
    m_ui_ptr->graphElementTableWidget->setItemDelegateForRow(row, nullptr);
  }
  m_delegate_rows.clear();

  m_ui_ptr->graphElementTableWidget->clear();
  m_ui_ptr->graphElementTypeLabel->setText("Edge");
  m_ui_ptr->graphElementTableWidget->blockSignals(true);
  m_ui_ptr->graphElementTableWidget->setRowCount(7);
  m_ui_ptr->graphElementTableWidget->setColumnCount(2);
  m_ui_ptr->graphElementTableWidget->setHorizontalHeaderLabels({"Field", "Value"});

  // Row 0: Name
  m_ui_ptr->graphElementTableWidget->setItem(0, 0, new QTableWidgetItem("Name"));
  m_ui_ptr->graphElementTableWidget->setItem(0, 1, 
    new QTableWidgetItem(QString::fromStdString(edge_msg.name)));

  // Row 1: Source Vertex ID
  m_ui_ptr->graphElementTableWidget->setItem(1, 0, new QTableWidgetItem("Source Vertex ID"));
  m_ui_ptr->graphElementTableWidget->setItem(1, 1, 
    new QTableWidgetItem(QString::number(edge_msg.source_vertex_id)));
  m_ui_ptr->graphElementTableWidget->item(1, 1)->setFlags(Qt::ItemIsEnabled);

  // Row 2: Target Vertex ID
  m_ui_ptr->graphElementTableWidget->setItem(2, 0, new QTableWidgetItem("Target Vertex ID"));
  m_ui_ptr->graphElementTableWidget->setItem(2, 1, 
    new QTableWidgetItem(QString::number(edge_msg.target_vertex_id)));
  m_ui_ptr->graphElementTableWidget->item(2, 1)->setFlags(Qt::ItemIsEnabled);

  // Row 3: Edge Type
  m_ui_ptr->graphElementTableWidget->setItem(3, 0, new QTableWidgetItem("Edge Type"));
  ComboBoxItemDelegate* edge_type_delegate = new ComboBoxItemDelegate(this);
  edge_type_delegate->addItemsToComboBox(m_edge_type);
  edge_type_delegate->setCurrentItemInComboBox(edge_msg.type);
  m_ui_ptr->graphElementTableWidget->setItemDelegateForRow(3, edge_type_delegate);
  m_ui_ptr->graphElementTableWidget->setItem(3, 1, 
    new QTableWidgetItem(QString::fromStdString(m_edge_type[edge_msg.type])));
  m_delegate_rows.insert(3);

  // Row 4: Edge Direction Type
  m_ui_ptr->graphElementTableWidget->setItem(4, 0, new QTableWidgetItem("Direction"));
  ComboBoxItemDelegate* direction_delegate = new ComboBoxItemDelegate(this);
  direction_delegate->addItemsToComboBox(m_edge_direction_type);
  direction_delegate->setCurrentItemInComboBox(edge_msg.edge_direction_type);
  m_ui_ptr->graphElementTableWidget->setItemDelegateForRow(4, direction_delegate);
  m_ui_ptr->graphElementTableWidget->setItem(4, 1, 
    new QTableWidgetItem(QString::fromStdString(m_edge_direction_type[edge_msg.edge_direction_type])));
  m_delegate_rows.insert(4);

  // Row 5: Bidirectional
  m_ui_ptr->graphElementTableWidget->setItem(5, 0, new QTableWidgetItem("Bidirectional"));
  m_ui_ptr->graphElementTableWidget->setItem(5, 1, 
    new QTableWidgetItem(edge_msg.bidirectional ? "true" : "false"));

  // Row 6: Properties
  m_ui_ptr->graphElementTableWidget->setItem(6, 0, new QTableWidgetItem("Properties"));
  PropertiesDialogItemDelegate* prop_delegate = new PropertiesDialogItemDelegate(this);
  for (const auto& prop : edge_msg.properties)
  {
    prop_delegate->addKeyValueProperty(prop.key, prop.value);
  }
  m_ui_ptr->graphElementTableWidget->setItemDelegateForRow(6, prop_delegate);
  m_ui_ptr->graphElementTableWidget->setItem(6, 1, 
    new QTableWidgetItem(QString("Properties (%1)").arg(edge_msg.properties.size())));
  m_delegate_rows.insert(6);

  m_ui_ptr->graphElementTableWidget->resizeColumnsToContents();
  m_ui_ptr->graphElementTableWidget->blockSignals(false);
}

void GraphCreatorPanel::updateTableVertexValueAndPublish(QTableWidgetItem* item)
{
  int row = item->row();
  QString text = item->text();

  switch (row)
  {
    case 0:  // ID (read-only)
      break;
    case 1:  // Name
      m_cur_vertex_msg.name = text.toStdString();
      break;
    case 2:  // Type
      for (size_t i = 0; i < m_vertex_types.size(); ++i)
      {
        if (text.toStdString() == m_vertex_types[i])
        {
          m_cur_vertex_msg.type = static_cast<uint8_t>(i);
          break;
        }
      }
      resetItemDelegate(row);
      break;
    case 3:  // X position
      m_cur_vertex_msg.pose.position.x = text.toDouble();
      resetItemDelegate(row);
      break;
    case 4:  // Y position
      m_cur_vertex_msg.pose.position.y = text.toDouble();
      resetItemDelegate(row);
      break;
    case 5:  // Properties
      resetItemDelegate(row);
      break;
  }

  RCLCPP_INFO(node_->get_logger(), "Publishing updated vertex: %s", m_cur_vertex_msg.name.c_str());
  m_updated_vertex_pub->publish(m_cur_vertex_msg);
}

void GraphCreatorPanel::updateTableEdgeValueAndPublish(QTableWidgetItem* item)
{
  int row = item->row();
  QString text = item->text();

  switch (row)
  {
    case 0:  // Name
      m_cur_edge_msg.name = text.toStdString();
      break;
    case 1:  // Source Vertex ID (read-only)
      break;
    case 2:  // Target Vertex ID (read-only)
      break;
    case 3:  // Edge type
      for (size_t i = 0; i < m_edge_type.size(); ++i)
      {
        if (text.toStdString() == m_edge_type[i])
        {
          m_cur_edge_msg.type = static_cast<uint8_t>(i);
          break;
        }
      }
      resetItemDelegate(row);
      break;
    case 4:  // Direction type
      for (size_t i = 0; i < m_edge_direction_type.size(); ++i)
      {
        if (text.toStdString() == m_edge_direction_type[i])
        {
          m_cur_edge_msg.edge_direction_type = static_cast<uint8_t>(i);
          break;
        }
      }
      resetItemDelegate(row);
      break;
    case 5:  // Bidirectional (read-only for now)
      break;
    case 6:  // Properties
      resetItemDelegate(row);
      break;
  }

  RCLCPP_INFO(node_->get_logger(), "Publishing updated edge: %s", m_cur_edge_msg.name.c_str());
  m_updated_edge_pub->publish(m_cur_edge_msg);
}
#else
void GraphCreatorPanel::currentVertexCallback(const std_msgs::msg::String::SharedPtr msg)
{
  RCLCPP_INFO(node_->get_logger(), "Received vertex: %s", msg->data.c_str());
  m_cur_graph_elem_type = GRAPH_ELEMENT_VERTEX;
}

void GraphCreatorPanel::currentEdgeCallback(const std_msgs::msg::String::SharedPtr msg)
{
  RCLCPP_INFO(node_->get_logger(), "Received edge: %s", msg->data.c_str());
  m_cur_graph_elem_type = GRAPH_ELEMENT_EDGE;
}
#endif

// Continuation of graph_creator_panel.cpp

#ifdef HAS_GRAPH_CREATOR_MSGS
void GraphCreatorPanel::currentGraphCreatorStateCallback(
  const graph_creator_msgs::msg::GraphCreatorState::SharedPtr gc_state_msg)
{
  setGraphCreatorState(*gc_state_msg);
}
#else
void GraphCreatorPanel::currentGraphCreatorStateCallback(const std_msgs::msg::String::SharedPtr msg)
{
  RCLCPP_INFO(node_->get_logger(), "Received state: %s", msg->data.c_str());
}
#endif

void GraphCreatorPanel::ongraphElementTableValueChanged(QTableWidgetItem* item)
{
  if (!item)
  {
    return;
  }

#ifdef HAS_GRAPH_MSGS
  if (m_cur_graph_elem_type == GRAPH_ELEMENT_VERTEX)
  {
    updateTableVertexValueAndPublish(item);
  }
  else if (m_cur_graph_elem_type == GRAPH_ELEMENT_EDGE)
  {
    updateTableEdgeValueAndPublish(item);
  }
#else
  RCLCPP_INFO(node_->get_logger(), "Table value changed: row %d, col %d", 
              item->row(), item->column());
#endif
}

void GraphCreatorPanel::resetItemDelegate(int current_row)
{
  if (m_delegate_rows.count(current_row) > 0)
  {
    m_ui_ptr->graphElementTableWidget->setItemDelegateForRow(current_row, nullptr);
    m_delegate_rows.erase(current_row);
  }
}

// Slot implementations
void GraphCreatorPanel::onCreateVerticesClicked()
{
  if (!node_)
  {
    return;
  }

#ifdef HAS_GRAPH_CREATOR_MSGS
  if (!m_set_gc_mode_clt->wait_for_service(std::chrono::seconds(1)))
  {
    RCLCPP_WARN(node_->get_logger(), "Set mode service not available");
    return;
  }

  auto request = std::make_shared<graph_creator_msgs::srv::SetGraphCreatorMode::Request>();
  request->graph_mode.mode = graph_creator_msgs::msg::GraphCreatorMode::CREATE_VERTICES;

  auto result_future = m_set_gc_mode_clt->async_send_request(request);
  
  if (rclcpp::spin_until_future_complete(node_, result_future, std::chrono::seconds(1)) ==
      rclcpp::FutureReturnCode::SUCCESS)
  {
    auto result = result_future.get();
    if (result->success)
    {
      RCLCPP_INFO(node_->get_logger(), "Switched to create vertices mode");
    }
    else
    {
      RCLCPP_ERROR(node_->get_logger(), "Failed to switch mode: %s", result->message.c_str());
    }
  }
#else
  RCLCPP_INFO(node_->get_logger(), "Create vertices mode selected");
#endif

  m_ui_ptr->createVerticesPushButton->setChecked(true);
  m_ui_ptr->createEdgesPushButton->setChecked(false);
}

void GraphCreatorPanel::onCreateEdgesClicked()
{
  if (!node_)
  {
    return;
  }

#ifdef HAS_GRAPH_CREATOR_MSGS
  if (!m_set_gc_mode_clt->wait_for_service(std::chrono::seconds(1)))
  {
    RCLCPP_WARN(node_->get_logger(), "Set mode service not available");
    return;
  }

  auto request = std::make_shared<graph_creator_msgs::srv::SetGraphCreatorMode::Request>();
  request->graph_mode.mode = graph_creator_msgs::msg::GraphCreatorMode::CREATE_EDGES;

  auto result_future = m_set_gc_mode_clt->async_send_request(request);
  
  if (rclcpp::spin_until_future_complete(node_, result_future, std::chrono::seconds(1)) ==
      rclcpp::FutureReturnCode::SUCCESS)
  {
    auto result = result_future.get();
    if (result->success)
    {
      RCLCPP_INFO(node_->get_logger(), "Switched to create edges mode");
    }
    else
    {
      RCLCPP_ERROR(node_->get_logger(), "Failed to switch mode: %s", result->message.c_str());
    }
  }
#else
  RCLCPP_INFO(node_->get_logger(), "Create edges mode selected");
#endif

  m_ui_ptr->createVerticesPushButton->setChecked(false);
  m_ui_ptr->createEdgesPushButton->setChecked(true);
}

void GraphCreatorPanel::onEdgeCreationTypeIndexChanged(int index)
{
  if (!node_)
  {
    return;
  }
  
  RCLCPP_INFO(node_->get_logger(), "Edge creation type changed to: %s", m_edge_type[index].c_str());
}

void GraphCreatorPanel::onEdgeDirectionTypeIndexChanged(int index)
{
  if (!node_)
  {
    return;
  }
  
  RCLCPP_INFO(node_->get_logger(), "Edge direction type changed to: %s", 
              m_edge_direction_type[index].c_str());
}

void GraphCreatorPanel::onLockAllVerticesClicked()
{
  if (!node_ || !m_set_vert_lck_clt)
  {
    return;
  }

  bool locked = m_ui_ptr->lockVerticesCheckBox->isChecked();

  if (!m_set_vert_lck_clt->wait_for_service(std::chrono::seconds(1)))
  {
    RCLCPP_WARN(node_->get_logger(), "Set vertices locked service not available");
    return;
  }

  auto request = std::make_shared<std_srvs::srv::SetBool::Request>();
  request->data = locked;

  auto result_future = m_set_vert_lck_clt->async_send_request(request);
  
  if (rclcpp::spin_until_future_complete(node_, result_future, std::chrono::seconds(1)) ==
      rclcpp::FutureReturnCode::SUCCESS)
  {
    auto result = result_future.get();
    if (result->success)
    {
      RCLCPP_INFO(node_->get_logger(), "Vertices locked: %s", locked ? "true" : "false");
    }
    else
    {
      RCLCPP_ERROR(node_->get_logger(), "Failed to set vertices locked: %s", result->message.c_str());
    }
  }
}

void GraphCreatorPanel::onLockAllEdgesClicked()
{
  if (!node_ || !m_set_edge_lck_clt)
  {
    return;
  }

  bool locked = m_ui_ptr->lockEdgesCheckBox->isChecked();

  if (!m_set_edge_lck_clt->wait_for_service(std::chrono::seconds(1)))
  {
    RCLCPP_WARN(node_->get_logger(), "Set edges locked service not available");
    return;
  }

  auto request = std::make_shared<std_srvs::srv::SetBool::Request>();
  request->data = locked;

  auto result_future = m_set_edge_lck_clt->async_send_request(request);
  
  if (rclcpp::spin_until_future_complete(node_, result_future, std::chrono::seconds(1)) ==
      rclcpp::FutureReturnCode::SUCCESS)
  {
    auto result = result_future.get();
    if (result->success)
    {
      RCLCPP_INFO(node_->get_logger(), "Edges locked: %s", locked ? "true" : "false");
    }
    else
    {
      RCLCPP_ERROR(node_->get_logger(), "Failed to set edges locked: %s", result->message.c_str());
    }
  }
}

void GraphCreatorPanel::onOperateOnAppTypeIndexChanged(int index)
{
  m_cur_graph_app_type = static_cast<uint8_t>(index);
  
  if (index == GRAPH_CREATOR)
  {
    m_cur_graph_app_type_str = "graph_creator";
  }
  else if (index == GRAPH_SERVER)
  {
    m_cur_graph_app_type_str = "graph_server";
  }
  
  if (node_)
  {
    RCLCPP_INFO(node_->get_logger(), "Operating on: %s", m_cur_graph_app_type_str.c_str());
  }
}

void GraphCreatorPanel::onLoadGraphClicked()
{
  if (!node_)
  {
    return;
  }

  getGraphFileLoadSaveInformation();

  if (!checkGraphFileLoadSaveInformation())
  {
    QMessageBox::warning(this, "Load Graph", "Please fill in all graph file information fields.");
    return;
  }

  if (!loadGraphConfirmMessage())
  {
    return;
  }

#ifdef HAS_GRAPH_MSGS
  rclcpp::Client<graph_msgs::srv::LoadGraph>::SharedPtr load_client;
  
  if (m_cur_graph_app_type == GRAPH_CREATOR)
  {
    load_client = m_load_graph_creator_clt;
  }
  else
  {
    load_client = m_load_graph_server_clt;
  }

  if (!load_client->wait_for_service(std::chrono::seconds(2)))
  {
    RCLCPP_ERROR(node_->get_logger(), "Load graph service not available for %s", 
                 m_cur_graph_app_type_str.c_str());
    QMessageBox::critical(this, "Service Error", 
      QString("Load graph service not available for %1").arg(QString::fromStdString(m_cur_graph_app_type_str)));
    return;
  }

  auto request = std::make_shared<graph_msgs::srv::LoadGraph::Request>();
  
  // Construct graph_url from the information provided
  // Format: package_name/graphs/graph_name.format OR absolute path
  std::string graph_url;
  if (!m_package_name.empty())
  {
    graph_url = m_package_name;
    if (!m_graph_folder.empty())
    {
      graph_url += "/" + m_graph_folder;
    }
    else
    {
      graph_url += "/graphs";
    }
    graph_url += "/" + m_graph_name;
    if (!m_graph_format.empty())
    {
      std::string ext;
      if (getGraphFileExtensionFromFormat(m_graph_format, ext))
      {
        graph_url += ext;
      }
    }
  }
  else
  {
    graph_url = m_graph_name;
  }
  
  request->graph_url = graph_url;

  RCLCPP_INFO(node_->get_logger(), "Loading graph from: %s", graph_url.c_str());

  auto result_future = load_client->async_send_request(request);
  
  if (rclcpp::spin_until_future_complete(node_, result_future, std::chrono::seconds(5)) == 
      rclcpp::FutureReturnCode::SUCCESS)
  {
    auto result = result_future.get();
    if (result->result == graph_msgs::srv::LoadGraph::Response::RESULT_SUCCESS)
    {
      RCLCPP_INFO(node_->get_logger(), "Graph loaded successfully from: %s", graph_url.c_str());
      QMessageBox::information(this, "Success", 
        QString("Graph loaded successfully from:\n%1\n\nVertices: %2\nEdges: %3")
        .arg(QString::fromStdString(graph_url))
        .arg(result->graph.vertices.size())
        .arg(result->graph.edges.size()));
    }
    else
    {
      std::string error_msg;
      switch(result->result)
      {
        case graph_msgs::srv::LoadGraph::Response::RESULT_GRAPH_DOES_NOT_EXIST:
          error_msg = "Graph file does not exist";
          break;
        case graph_msgs::srv::LoadGraph::Response::RESULT_INVALID_GRAPH_FILE_PATH:
          error_msg = "Invalid graph file path";
          break;
        default:
          error_msg = "Undefined failure";
      }
      RCLCPP_ERROR(node_->get_logger(), "Failed to load graph: %s", error_msg.c_str());
      QMessageBox::critical(this, "Load Failed", 
        QString("Failed to load graph:\n%1").arg(QString::fromStdString(error_msg)));
    }
  }
  else
  {
    RCLCPP_ERROR(node_->get_logger(), "Service call timed out");
    QMessageBox::critical(this, "Timeout", "Load graph service call timed out");
  }
#else
  RCLCPP_INFO(node_->get_logger(), "Load graph: %s.%s from %s/%s", 
              m_graph_name.c_str(), m_graph_format.c_str(), 
              m_package_name.c_str(), m_graph_folder.c_str());
  QMessageBox::information(this, "Load Graph", 
    QString("Would load graph: %1 (service not available)").arg(QString::fromStdString(m_graph_name)));
#endif
}

void GraphCreatorPanel::onSaveGraphClicked()
{
  if (!node_)
  {
    return;
  }

  getGraphFileLoadSaveInformation();

  if (!checkGraphFileLoadSaveInformation())
  {
    QMessageBox::warning(this, "Save Graph", "Please fill in all graph file information fields.");
    return;
  }

  if (!saveGraphConfirmMessage())
  {
    return;
  }

#ifdef HAS_GRAPH_MSGS
  if (!m_save_graph_creator_clt->wait_for_service(std::chrono::seconds(2)))
  {
    RCLCPP_ERROR(node_->get_logger(), "Save graph service not available");
    QMessageBox::critical(this, "Service Error", "Save graph service not available");
    return;
  }

  auto request = std::make_shared<graph_msgs::srv::SaveGraph::Request>();
  
  // Set graph file name
  request->graph_file_name = m_graph_name;
  
  // Construct save URL
  std::string save_url;
  if (!m_package_name.empty())
  {
    save_url = m_package_name;
    if (!m_graph_folder.empty())
    {
      save_url += "/" + m_graph_folder;
    }
    else
    {
      save_url += "/graphs";
    }
  }
  else
  {
    save_url = "./";
  }
  
  request->save_graph_url = save_url;

  RCLCPP_INFO(node_->get_logger(), "Saving graph: %s to %s", 
              request->graph_file_name.c_str(), request->save_graph_url.c_str());

  auto result_future = m_save_graph_creator_clt->async_send_request(request);
  
  if (rclcpp::spin_until_future_complete(node_, result_future, std::chrono::seconds(5)) == 
      rclcpp::FutureReturnCode::SUCCESS)
  {
    auto result = result_future.get();
    if (result->result == graph_msgs::srv::SaveGraph::Response::RESULT_SUCCESS)
    {
      RCLCPP_INFO(node_->get_logger(), "Graph saved successfully");
      QMessageBox::information(this, "Success", 
        QString("Graph saved successfully to:\n%1/%2")
        .arg(QString::fromStdString(save_url))
        .arg(QString::fromStdString(m_graph_name)));
    }
    else
    {
      std::string error_msg;
      switch(result->result)
      {
        case graph_msgs::srv::SaveGraph::Response::RESULT_GRAPH_ALREADY_EXISTS:
          error_msg = "Graph file already exists";
          break;
        case graph_msgs::srv::SaveGraph::Response::RESULT_INVALID_GRAPH_FILE_NAME:
          error_msg = "Invalid graph file name";
          break;
        case graph_msgs::srv::SaveGraph::Response::RESULT_INVALID_GRAPH_FILE_PATH:
          error_msg = "Invalid graph file path";
          break;
        default:
          error_msg = "Undefined failure";
      }
      RCLCPP_ERROR(node_->get_logger(), "Failed to save graph: %s", error_msg.c_str());
      QMessageBox::critical(this, "Save Failed", 
        QString("Failed to save graph:\n%1").arg(QString::fromStdString(error_msg)));
    }
  }
  else
  {
    RCLCPP_ERROR(node_->get_logger(), "Service call timed out");
    QMessageBox::critical(this, "Timeout", "Save graph service call timed out");
  }
#else
  RCLCPP_INFO(node_->get_logger(), "Save graph: %s.%s to %s/%s", 
              m_graph_name.c_str(), m_graph_format.c_str(), 
              m_package_name.c_str(), m_graph_folder.c_str());
  QMessageBox::information(this, "Save Graph", 
    QString("Would save graph: %1 (service not available)").arg(QString::fromStdString(m_graph_name)));
#endif
}

void GraphCreatorPanel::onRefreshClicked()
{
  if (!node_)
  {
    return;
  }

#ifdef HAS_GRAPH_CREATOR_MSGS
  if (!m_get_gc_state_clt->wait_for_service(std::chrono::seconds(1)))
  {
    RCLCPP_WARN(node_->get_logger(), "Get state service not available");
    return;
  }

  auto request = std::make_shared<graph_creator_msgs::srv::GetGraphCreatorState::Request>();
  auto result_future = m_get_gc_state_clt->async_send_request(request);
  
  if (rclcpp::spin_until_future_complete(node_, result_future, std::chrono::seconds(2)) == 
      rclcpp::FutureReturnCode::SUCCESS)
  {
    auto result = result_future.get();
    if (result->success)
    {
      setGraphCreatorState(result->state);
      RCLCPP_INFO(node_->get_logger(), "State refreshed successfully");
    }
    else
    {
      RCLCPP_ERROR(node_->get_logger(), "Failed to get state: %s", result->message.c_str());
    }
  }
#else
  RCLCPP_INFO(node_->get_logger(), "Refresh clicked");
#endif
}

#ifdef HAS_GRAPH_CREATOR_MSGS
void GraphCreatorPanel::setGraphCreatorState(const graph_creator_msgs::msg::GraphCreatorState& gc_state_msg)
{
  m_cur_gc_state_msg = gc_state_msg;

  // Update UI based on state
  if (gc_state_msg.graph_mode == 0)  // CREATE_VERTICES
  {
    m_ui_ptr->createVerticesPushButton->setChecked(true);
    m_ui_ptr->createEdgesPushButton->setChecked(false);
  }
  else if (gc_state_msg.graph_mode == 1)  // CREATE_EDGES
  {
    m_ui_ptr->createVerticesPushButton->setChecked(false);
    m_ui_ptr->createEdgesPushButton->setChecked(true);
  }

  // Update edge creation type combo box
  m_ui_ptr->edgeCreationTypeComboBox->blockSignals(true);
  m_ui_ptr->edgeCreationTypeComboBox->setCurrentIndex(gc_state_msg.current_edge_type);
  m_ui_ptr->edgeCreationTypeComboBox->blockSignals(false);

  // Update bidirectional checkbox
  m_ui_ptr->lockVerticesCheckBox->blockSignals(true);
  m_ui_ptr->lockVerticesCheckBox->setChecked(gc_state_msg.all_vertices_locked);
  m_ui_ptr->lockVerticesCheckBox->blockSignals(false);

  m_ui_ptr->lockEdgesCheckBox->blockSignals(true);
  m_ui_ptr->lockEdgesCheckBox->setChecked(gc_state_msg.all_edges_locked);
  m_ui_ptr->lockEdgesCheckBox->blockSignals(false);

  RCLCPP_DEBUG(node_->get_logger(), "Graph creator state updated in UI");
}
#endif

// Helper functions
void GraphCreatorPanel::getGraphFileLoadSaveInformation()
{
  m_graph_name = m_ui_ptr->graphNameLineEdit->text().toStdString();
  m_graph_format = m_ui_ptr->graphFileFormatComboBox->currentText().toStdString();
  m_package_name = m_ui_ptr->packageNameLineEdit->text().toStdString();
  m_graph_folder = m_ui_ptr->graphFolderLineEdit->text().toStdString();
}

bool GraphCreatorPanel::checkGraphFileLoadSaveInformation()
{
  if (m_graph_name.empty())
  {
    if (node_)
    {
      RCLCPP_ERROR(node_->get_logger(), "Graph name is empty");
    }
    return false;
  }
  
  return true;
}

bool GraphCreatorPanel::getGraphFileExtensionFromFormat(const std::string& format, std::string& extension)
{
  std::string format_lower = format;
  std::transform(format_lower.begin(), format_lower.end(), format_lower.begin(), ::tolower);

  if (format_lower == "yaml" || format_lower == "yml")
  {
    extension = ".yaml";
    return true;
  }
  else if (format_lower == "json")
  {
    extension = ".json";
    return true;
  }
  else if (format_lower == "xml" || format_lower == "graphml")
  {
    extension = ".graphml";
    return true;
  }
  else
  {
    if (node_)
    {
      RCLCPP_ERROR(node_->get_logger(), "Unknown graph format: %s", format.c_str());
    }
    return false;
  }
}

bool GraphCreatorPanel::loadGraphConfirmMessage()
{
  QString message = QString("Are you sure you want to load the following graph?\n\n"
                           "Name: %1\n"
                           "Format: %2\n"
                           "Package: %3\n"
                           "Folder: %4\n\n"
                           "This will replace the current graph.")
                    .arg(QString::fromStdString(m_graph_name))
                    .arg(QString::fromStdString(m_graph_format))
                    .arg(QString::fromStdString(m_package_name.empty() ? "(none)" : m_package_name))
                    .arg(QString::fromStdString(m_graph_folder.empty() ? "(default)" : m_graph_folder));

  QMessageBox::StandardButton reply = QMessageBox::question(
    this, "Load Graph Confirmation", message,
    QMessageBox::Yes | QMessageBox::No, QMessageBox::No);
    
  return reply == QMessageBox::Yes;
}

bool GraphCreatorPanel::saveGraphConfirmMessage()
{
  QString message = QString("Are you sure you want to save the current graph?\n\n"
                           "Name: %1\n"
                           "Format: %2\n"
                           "Package: %3\n"
                           "Folder: %4\n\n"
                           "This will overwrite any existing file with the same name.")
                    .arg(QString::fromStdString(m_graph_name))
                    .arg(QString::fromStdString(m_graph_format))
                    .arg(QString::fromStdString(m_package_name.empty() ? "(current)" : m_package_name))
                    .arg(QString::fromStdString(m_graph_folder.empty() ? "(default)" : m_graph_folder));

  QMessageBox::StandardButton reply = QMessageBox::question(
    this, "Save Graph Confirmation", message,
    QMessageBox::Yes | QMessageBox::No, QMessageBox::No);
    
  return reply == QMessageBox::Yes;
}

// RViz Configuration save/load
void GraphCreatorPanel::save(rviz_common::Config config) const
{
  rviz_common::Panel::save(config);
  
  config.mapSetValue("graph_name", QString::fromStdString(m_graph_name));
  config.mapSetValue("graph_format", QString::fromStdString(m_graph_format));
  config.mapSetValue("package_name", QString::fromStdString(m_package_name));
  config.mapSetValue("graph_folder", QString::fromStdString(m_graph_folder));
  config.mapSetValue("graph_app_type", static_cast<int>(m_cur_graph_app_type));
}

void GraphCreatorPanel::load(const rviz_common::Config& config)
{
  rviz_common::Panel::load(config);
  
  QString out_string;
  int out_int;
  
  if (config.mapGetString("graph_name", &out_string))
  {
    m_graph_name = out_string.toStdString();
    m_ui_ptr->graphNameLineEdit->setText(out_string);
  }

  if (config.mapGetString("graph_format", &out_string))
  {
    m_graph_format = out_string.toStdString();
    int req_index = m_ui_ptr->graphFileFormatComboBox->findText(out_string);
    if (req_index >= 0)
    {
      m_ui_ptr->graphFileFormatComboBox->setCurrentIndex(req_index);
    }
  }

  if (config.mapGetString("package_name", &out_string))
  {
    m_package_name = out_string.toStdString();
    m_ui_ptr->packageNameLineEdit->setText(out_string);
  }

  if (config.mapGetString("graph_folder", &out_string))
  {
    m_graph_folder = out_string.toStdString();
    m_ui_ptr->graphFolderLineEdit->setText(out_string);
  }

  if (config.mapGetInt("graph_app_type", &out_int))
  {
    m_cur_graph_app_type = static_cast<uint8_t>(out_int);
    m_ui_ptr->graphAppTypeComboBox->setCurrentIndex(out_int);
  }
}

}  // namespace graph_creator_rviz_plugin
