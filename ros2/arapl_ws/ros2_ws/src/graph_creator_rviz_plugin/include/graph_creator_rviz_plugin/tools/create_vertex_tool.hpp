#pragma once

#ifndef Q_MOC_RUN
#include <rclcpp/rclcpp.hpp>
#include <geometry_msgs/msg/pose_stamped.hpp>
#include <tf2/LinearMath/Quaternion.h>
#include <tf2_geometry_msgs/tf2_geometry_msgs.hpp>
#include <OgreVector3.h>
#include <OgreQuaternion.h>
#include <OgreSceneNode.h>
#include <OgreSceneManager.h>
#endif

#include <rviz_common/tool.hpp>
#include <rviz_rendering/objects/arrow.hpp>
#include <rviz_common/properties/string_property.hpp>
#include <rviz_common/properties/bool_property.hpp>
#include <rviz_common/viewport_mouse_event.hpp>
#include <rviz_common/display_context.hpp>
#include <rviz_common/render_panel.hpp>
#include <rviz_common/interaction/view_picker_iface.hpp>

namespace graph_creator_rviz_plugin
{

class CreateVertexTool : public rviz_common::Tool
{
  Q_OBJECT

public:
  CreateVertexTool();
  ~CreateVertexTool() override;

  void onInitialize() override;
  void activate() override;
  void deactivate() override;
  
  int processMouseEvent(rviz_common::ViewportMouseEvent& event) override;

protected:
  enum State
  {
    Position,
    Orientation
  };

  virtual void onPoseSet(double x, double y, double theta);
  
  std::shared_ptr<rviz_rendering::Arrow> arrow_;
  Ogre::Vector3 pos_;
  State state_;

private Q_SLOTS:
  void updateTopic();
  void updateAutoDeactivate();

private:
  rclcpp::Node::SharedPtr node_;
  rclcpp::Publisher<geometry_msgs::msg::PoseStamped>::SharedPtr vertex_pub_;

  rviz_common::properties::StringProperty* topic_property_;
  rviz_common::properties::BoolProperty* auto_deactivate_property_;
};

}  // namespace graph_creator_rviz_plugin
