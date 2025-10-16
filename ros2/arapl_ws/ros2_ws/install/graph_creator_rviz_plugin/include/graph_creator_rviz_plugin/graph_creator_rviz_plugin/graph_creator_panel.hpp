#pragma once

#include <QWidget>
#include <QTableWidget>
#include <QTableWidgetItem>
#include <QComboBox>
#include <QCheckBox>
#include <QPushButton>
#include <QMessageBox>
#include <QMap>
#include <memory>
#include <string>
#include <vector>
#include <unordered_set>
#include <algorithm>

#ifndef Q_MOC_RUN
#include <rclcpp/rclcpp.hpp>
#include <geometry_msgs/msg/pose_stamped.hpp>
#include <std_msgs/msg/string.hpp>

// Conditional compilation for custom messages
#ifdef HAS_GRAPH_MSGS
#include <graph_msgs/msg/vertex.hpp>
#include <graph_msgs/msg/edge.hpp>
#include <graph_msgs/msg/property.hpp>
#include <graph_msgs/srv/load_graph.hpp>
#include <graph_msgs/srv/save_graph.hpp>
#endif

#ifdef HAS_GRAPH_CREATOR_MSGS
#include <graph_creator_msgs/msg/graph_creator_state.hpp>
#include <graph_creator_msgs/msg/graph_creator_mode.hpp>
#include <graph_creator_msgs/msg/edge_creation_type.hpp>
#include <graph_creator_msgs/msg/edge_direction_creation_type.hpp>
#include <graph_creator_msgs/srv/set_graph_creator_mode.hpp>
#include <graph_creator_msgs/srv/set_edge_creation_type.hpp>
#include <graph_creator_msgs/srv/set_edge_direction_creation_type.hpp>
#include <graph_creator_msgs/srv/get_graph_creator_state.hpp>
#endif

#include <std_srvs/srv/set_bool.hpp>
#endif

#include <rviz_common/panel.hpp>
#include <rviz_common/config.hpp>
#include <rviz_common/display_context.hpp>

#include "combo_box_delegate.hpp"
#include "double_spin_box_delegate.hpp"
#include "properties_dialog_delegate.hpp"
#include "graph_creator_panel_ui.hpp"

namespace graph_creator_rviz_plugin
{

class GraphCreatorPanel : public rviz_common::Panel
{
  Q_OBJECT

public:
  explicit GraphCreatorPanel(QWidget* parent = nullptr);
  ~GraphCreatorPanel() override;

  void onInitialize() override;
  void load(const rviz_common::Config& config) override;
  void save(rviz_common::Config config) const override;

public Q_SLOTS:
  void onCreateVerticesClicked();
  void onCreateEdgesClicked();
  void onEdgeCreationTypeIndexChanged(int index);
  void onEdgeDirectionTypeIndexChanged(int index);
  void onLockAllVerticesClicked();
  void onLockAllEdgesClicked();
  void ongraphElementTableValueChanged(QTableWidgetItem* item);
  void onOperateOnAppTypeIndexChanged(int index);
  void onLoadGraphClicked();
  void onSaveGraphClicked();
  void onRefreshClicked();

private:
  // ROS2 node
  rclcpp::Node::SharedPtr node_;

#ifdef HAS_GRAPH_MSGS
  // Messages with actual types
  graph_msgs::msg::Vertex m_cur_vertex_msg;
  graph_msgs::msg::Edge m_cur_edge_msg;
  
  // Publishers
  rclcpp::Publisher<graph_msgs::msg::Vertex>::SharedPtr m_updated_vertex_pub;
  rclcpp::Publisher<graph_msgs::msg::Edge>::SharedPtr m_updated_edge_pub;

  // Subscribers
  rclcpp::Subscription<graph_msgs::msg::Vertex>::SharedPtr m_current_vertex_sub;
  rclcpp::Subscription<graph_msgs::msg::Edge>::SharedPtr m_current_edge_sub;

  // Subscriber callbacks
  void currentVertexCallback(const graph_msgs::msg::Vertex::SharedPtr vertex_msg);
  void currentEdgeCallback(const graph_msgs::msg::Edge::SharedPtr edge_msg);
  
  void createVertexTable(const graph_msgs::msg::Vertex& vertex_msg);
  void createEdgeTable(const graph_msgs::msg::Edge& edge_msg);
#else
  // Placeholder publishers/subscribers
  rclcpp::Publisher<std_msgs::msg::String>::SharedPtr m_updated_vertex_pub;
  rclcpp::Publisher<std_msgs::msg::String>::SharedPtr m_updated_edge_pub;
  rclcpp::Subscription<std_msgs::msg::String>::SharedPtr m_current_vertex_sub;
  rclcpp::Subscription<std_msgs::msg::String>::SharedPtr m_current_edge_sub;
  
  void currentVertexCallback(const std_msgs::msg::String::SharedPtr msg);
  void currentEdgeCallback(const std_msgs::msg::String::SharedPtr msg);
#endif

#ifdef HAS_GRAPH_CREATOR_MSGS
  graph_creator_msgs::msg::GraphCreatorState m_cur_gc_state_msg;
  
  rclcpp::Subscription<graph_creator_msgs::msg::GraphCreatorState>::SharedPtr m_gc_state_sub;
  void currentGraphCreatorStateCallback(const graph_creator_msgs::msg::GraphCreatorState::SharedPtr gc_state_msg);
  void setGraphCreatorState(const graph_creator_msgs::msg::GraphCreatorState& gc_state_msg);
  
  // Service clients
  rclcpp::Client<graph_creator_msgs::srv::SetGraphCreatorMode>::SharedPtr m_set_gc_mode_clt;
  rclcpp::Client<graph_creator_msgs::srv::SetEdgeCreationType>::SharedPtr m_set_et_clt;
  rclcpp::Client<graph_creator_msgs::srv::SetEdgeDirectionCreationType>::SharedPtr m_set_ed_clt;
  rclcpp::Client<graph_creator_msgs::srv::GetGraphCreatorState>::SharedPtr m_get_gc_state_clt;
#else
  rclcpp::Subscription<std_msgs::msg::String>::SharedPtr m_gc_state_sub;
  void currentGraphCreatorStateCallback(const std_msgs::msg::String::SharedPtr msg);
#endif

  // Common service clients
  rclcpp::Client<std_srvs::srv::SetBool>::SharedPtr m_set_vert_lck_clt;
  rclcpp::Client<std_srvs::srv::SetBool>::SharedPtr m_set_edge_lck_clt;

#ifdef HAS_GRAPH_MSGS
  rclcpp::Client<graph_msgs::srv::LoadGraph>::SharedPtr m_load_graph_creator_clt;
  rclcpp::Client<graph_msgs::srv::SaveGraph>::SharedPtr m_save_graph_creator_clt;
  rclcpp::Client<graph_msgs::srv::LoadGraph>::SharedPtr m_load_graph_server_clt;
#endif

  std::vector<std::string> m_vertex_types = {"Normal", "Park", "Charge", "Control", "Report"};
  std::vector<std::string> m_edge_type = {"Straight Line", "Cubic Bezier"};
  std::vector<std::string> m_edge_direction_type = {"Forward", "Reverse", "Bidirectional"};

  // UI
  enum GraphElementTypes
  {
    GRAPH_ELEMENT_VERTEX = 1,
    GRAPH_ELEMENT_EDGE = 2,
    GRAPH_ELEMENT_UNKNOWN = 255
  };

  uint8_t m_cur_graph_elem_type = GRAPH_ELEMENT_UNKNOWN;

  enum GraphAppType
  {
    GRAPH_CREATOR = 0,
    GRAPH_SERVER = 1
  };

  uint8_t m_cur_graph_app_type = GRAPH_CREATOR;
  std::string m_cur_graph_app_type_str = "graph creator";

  Ui::graphCreatorPanelForm* m_ui_ptr;

  void updateTableVertexValueAndPublish(QTableWidgetItem* item);
  void updateTableEdgeValueAndPublish(QTableWidgetItem* item);

  std::unordered_set<int> m_delegate_rows;
  void resetItemDelegate(int current_row);

  // Graph file
  std::string m_graph_name;
  std::string m_graph_format;
  std::string m_package_name;
  std::string m_graph_folder;

  bool m_load_save_graph_from_local = false;

  bool loadGraphConfirmMessage();
  bool saveGraphConfirmMessage();
  void getGraphFileLoadSaveInformation();
  bool checkGraphFileLoadSaveInformation();
  bool getGraphFileExtensionFromFormat(const std::string& format, std::string& extension);
};

}  // namespace graph_creator_rviz_plugin
