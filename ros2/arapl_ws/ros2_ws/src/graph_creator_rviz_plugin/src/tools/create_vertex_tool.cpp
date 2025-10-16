#include "graph_creator_rviz_plugin/tools/create_vertex_tool.hpp"
#include <pluginlib/class_list_macros.hpp>
#include <rviz_common/display_context.hpp>
#include <rviz_common/interaction/view_picker_iface.hpp>
#include <rviz_common/load_resource.hpp>

#include <OgreSceneNode.h>
#include <OgreSceneManager.h>
#include <OgreEntity.h>
#include <OgrePlane.h>
#include <OgreRay.h>

PLUGINLIB_EXPORT_CLASS(graph_creator_rviz_plugin::CreateVertexTool, rviz_common::Tool)

namespace graph_creator_rviz_plugin
{

CreateVertexTool::CreateVertexTool()
  : state_(Position)
{
  shortcut_key_ = 'v';
  
  topic_property_ = new rviz_common::properties::StringProperty(
    "Topic", "add_vertex_pose", 
    "The topic for adding vertex with pose",
    getPropertyContainer(), SLOT(updateTopic()), this);

  auto_deactivate_property_ = new rviz_common::properties::BoolProperty(
    "Single click", false, 
    "Switch away from this tool after one click.",
    getPropertyContainer(), SLOT(updateAutoDeactivate()), this);
}

CreateVertexTool::~CreateVertexTool()
{
  delete topic_property_;
  delete auto_deactivate_property_;
}

void CreateVertexTool::onInitialize()
{
  // Create arrow visualization
  arrow_ = std::make_shared<rviz_rendering::Arrow>(
    scene_manager_, nullptr, 2.0f, 0.2f, 0.5f, 0.35f);
  arrow_->setColor(1.0f, 0.0f, 0.0f, 1.0f);
  arrow_->getSceneNode()->setVisible(false);
  
  setName("Create Vertex");
  
  auto rviz_ros_node = context_->getRosNodeAbstraction().lock();
  if (rviz_ros_node)
  {
    node_ = rviz_ros_node->get_raw_node();
    updateTopic();
  }
}

void CreateVertexTool::activate()
{
  setStatus("Click and drag mouse to set position and orientation for the vertex.");
  state_ = Position;
  arrow_->getSceneNode()->setVisible(false);
}

void CreateVertexTool::deactivate()
{
  arrow_->getSceneNode()->setVisible(false);
}

void CreateVertexTool::updateTopic()
{
  if (!node_)
  {
    return;
  }

  try
  {
    rclcpp::QoS qos_profile(1);
    vertex_pub_ = node_->create_publisher<geometry_msgs::msg::PoseStamped>(
      topic_property_->getStdString(), qos_profile);
  }
  catch (const std::exception& e)
  {
    RCLCPP_ERROR(node_->get_logger(), "Error creating publisher: %s", e.what());
  }
}

void CreateVertexTool::updateAutoDeactivate()
{
  // No additional implementation needed
}

void CreateVertexTool::onPoseSet(double x, double y, double theta)
{
  if (!node_ || !vertex_pub_)
  {
    return;
  }

  std::string fixed_frame = context_->getFixedFrame().toStdString();
  
  tf2::Quaternion quat;
  quat.setRPY(0.0, 0.0, theta);

  geometry_msgs::msg::PoseStamped goal;
  goal.pose.orientation = tf2::toMsg(quat);
  goal.pose.position.x = x;
  goal.pose.position.y = y;
  goal.pose.position.z = 0.0;
  goal.header.frame_id = fixed_frame;
  goal.header.stamp = node_->now();

  RCLCPP_INFO(node_->get_logger(),
    "Create vertex: Frame:%s, Position(%.3f, %.3f, %.3f), Orientation(%.3f, %.3f, %.3f, %.3f) = Angle: %.3f",
    fixed_frame.c_str(), goal.pose.position.x, goal.pose.position.y, goal.pose.position.z,
    goal.pose.orientation.x, goal.pose.orientation.y, goal.pose.orientation.z,
    goal.pose.orientation.w, theta);

  vertex_pub_->publish(goal);
}

int CreateVertexTool::processMouseEvent(rviz_common::ViewportMouseEvent& event)
{
  int flags = 0;
  Ogre::Vector3 intersection;
  Ogre::Plane ground_plane(Ogre::Vector3::UNIT_Z, 0.0f);

  if (event.leftDown())
  {
    // Get 3D point from mouse click
    if (context_->getViewPicker()->get3DPoint(event.panel, event.x, event.y, intersection))
    {
      pos_ = intersection;
      arrow_->setPosition(pos_);
      state_ = Orientation;
      flags |= Render;
    }
  }
  else if (event.type == QEvent::MouseMove && event.left())
  {
    if (state_ == Orientation)
    {
      // Get current mouse position
      Ogre::Vector3 cur_pos;
      if (context_->getViewPicker()->get3DPoint(event.panel, event.x, event.y, cur_pos))
      {
        double angle = atan2(cur_pos.y - pos_.y, cur_pos.x - pos_.x);
        arrow_->getSceneNode()->setVisible(true);
        
        // Rotate arrow to point in direction of mouse
        Ogre::Quaternion orient_x = Ogre::Quaternion(
          Ogre::Radian(-Ogre::Math::HALF_PI), Ogre::Vector3::UNIT_Y);
        arrow_->setOrientation(
          Ogre::Quaternion(Ogre::Radian(angle), Ogre::Vector3::UNIT_Z) * orient_x);
        
        flags |= Render;
      }
    }
  }
  else if (event.leftUp())
  {
    if (state_ == Orientation)
    {
      // Finalize pose
      Ogre::Vector3 cur_pos;
      if (context_->getViewPicker()->get3DPoint(event.panel, event.x, event.y, cur_pos))
      {
        double angle = atan2(cur_pos.y - pos_.y, cur_pos.x - pos_.x);
        onPoseSet(pos_.x, pos_.y, angle);
        
        if (auto_deactivate_property_->getBool())
        {
          flags |= (Finished | Render);
        }
        else
        {
          state_ = Position;
          arrow_->getSceneNode()->setVisible(false);
          flags |= Render;
        }
      }
    }
  }

  return flags;
}

}  // namespace graph_creator_rviz_plugin
