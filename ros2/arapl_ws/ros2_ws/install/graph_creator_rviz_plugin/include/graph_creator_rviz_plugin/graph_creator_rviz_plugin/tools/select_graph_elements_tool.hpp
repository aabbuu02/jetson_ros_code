#pragma once

#include <unordered_set>
#include <string>
#include <QObject>

#ifndef Q_MOC_RUN
#include <rclcpp/rclcpp.hpp>
#include <std_msgs/msg/string.hpp>
#endif

#include <rviz_common/tool.hpp>
#include <rviz_common/properties/string_property.hpp>
#include <rviz_common/properties/bool_property.hpp>
#include <rviz_common/viewport_mouse_event.hpp>
#include <rviz_common/interaction/selection_manager.hpp>
#include <rviz_common/properties/property_tree_model.hpp>
#include <rviz_common/display_context.hpp>

namespace graph_creator_rviz_plugin
{

class SelectGraphElementsTool : public rviz_common::Tool
{
  Q_OBJECT

public:
  SelectGraphElementsTool();
  ~SelectGraphElementsTool() override;

  void onInitialize() override;
  void activate() override;
  void deactivate() override;
  
  int processMouseEvent(rviz_common::ViewportMouseEvent& event) override;
  int processKeyEvent(QKeyEvent* event, rviz_common::RenderPanel* panel) override;

private Q_SLOTS:
  void updateTopic();
  void updateAutoDeactivate();

private:
  bool selecting_ = false;
  int selected_marker_count_ = 0;
  std::unordered_set<std::string> selected_marker_set_;
  
  // For selection rectangle
  int sel_start_x_;
  int sel_start_y_;

  rclcpp::Node::SharedPtr node_;
  rclcpp::Publisher<std_msgs::msg::String>::SharedPtr selection_pub_;

  rviz_common::properties::StringProperty* topic_property_;
  rviz_common::properties::BoolProperty* auto_deactivate_property_;

  void processSelectedArea();
};

}  // namespace graph_creator_rviz_plugin
