#include "graph_creator_rviz_plugin/tools/select_graph_elements_tool.hpp"
#include <pluginlib/class_list_macros.hpp>
#include <rviz_common/display_context.hpp>
#include <rviz_common/properties/property.hpp>
#include <rviz_common/interaction/selection_manager.hpp>

PLUGINLIB_EXPORT_CLASS(graph_creator_rviz_plugin::SelectGraphElementsTool, rviz_common::Tool)

namespace graph_creator_rviz_plugin
{

SelectGraphElementsTool::SelectGraphElementsTool()
  : sel_start_x_(0), sel_start_y_(0)
{
  topic_property_ = new rviz_common::properties::StringProperty(
    "Topic", "graph_creator/selected_graph_elements", 
    "The topic for selected graph elements",
    getPropertyContainer(), SLOT(updateTopic()), this);

  auto_deactivate_property_ = new rviz_common::properties::BoolProperty(
    "Single selection", false, 
    "Switch away from this tool after selection.",
    getPropertyContainer(), SLOT(updateAutoDeactivate()), this);
}

SelectGraphElementsTool::~SelectGraphElementsTool()
{
  delete topic_property_;
  delete auto_deactivate_property_;
}

void SelectGraphElementsTool::onInitialize()
{
  setName("Select Graph Elements");
  
  auto rviz_ros_node = context_->getRosNodeAbstraction().lock();
  if (rviz_ros_node)
  {
    node_ = rviz_ros_node->get_raw_node();
    updateTopic();
  }
}

void SelectGraphElementsTool::activate()
{
  setStatus("Click to select graph elements. Drag for area selection.");
  selecting_ = false;
}

void SelectGraphElementsTool::deactivate()
{
  selecting_ = false;
}

void SelectGraphElementsTool::updateTopic()
{
  if (!node_)
  {
    return;
  }

  try
  {
    rclcpp::QoS qos_profile(1);
    selection_pub_ = node_->create_publisher<std_msgs::msg::String>(
      topic_property_->getStdString(), qos_profile);
  }
  catch (const std::exception& e)
  {
    RCLCPP_ERROR(node_->get_logger(), "Error creating publisher: %s", e.what());
  }

  selected_marker_count_ = 0;
}

int SelectGraphElementsTool::processKeyEvent(QKeyEvent* event, rviz_common::RenderPanel* panel)
{
  (void)event;
  (void)panel;
  return Render;
}

int SelectGraphElementsTool::processMouseEvent(rviz_common::ViewportMouseEvent& event)
{
  int flags = 0;

  // Handle selection
  if (event.leftDown())
  {
    selecting_ = true;
    sel_start_x_ = event.x;
    sel_start_y_ = event.y;
    flags |= Render;
  }
  else if (event.leftUp())
  {
    if (selecting_)
    {
      selecting_ = false;
      
      // Get selection from context
      auto selection_manager = context_->getSelectionManager();
      if (selection_manager)
      {
        // Simple single-point selection for now
        // In full implementation, would use selection rectangle
        processSelectedArea();
        
        if (auto_deactivate_property_->getBool())
        {
          flags |= Finished;
        }
      }
      
      flags |= Render;
    }
  }
  else if (event.type == QEvent::MouseMove && event.left())
  {
    if (selecting_)
    {
      // Update selection rectangle (visual feedback could be added here)
      flags |= Render;
    }
  }

  return flags;
}

void SelectGraphElementsTool::updateAutoDeactivate()
{
  // No additional implementation needed
}

void SelectGraphElementsTool::processSelectedArea()
{
  if (!node_ || !selection_pub_)
  {
    return;
  }

  selected_marker_set_.clear();
  selected_marker_count_ = 0;

  auto selection_manager = context_->getSelectionManager();
  if (!selection_manager)
  {
    RCLCPP_WARN(node_->get_logger(), "Selection manager not available");
    return;
  }

  auto model = selection_manager->getPropertyModel();
  if (!model)
  {
    RCLCPP_WARN(node_->get_logger(), "Property model not available");
    return;
  }

  std::string selection_result;

  // Iterate through selected items
  int row = 0;
  while (model->hasIndex(row, 0))
  {
    QModelIndex child_index = model->index(row, 0);
    auto* child = model->getProp(child_index);
    
    if (child)
    {
      QString name = child->getName();
      QStringList splitStrLst = name.split(" ");
      
      std::string type_str;
      std::string marker_name_str;

      if (splitStrLst.size() > 1)
      {
        type_str = splitStrLst.front().toStdString();
        
        // Get marker name (last part before '/')
        QStringList nameParts = splitStrLst.back().split("/");
        if (!nameParts.isEmpty())
        {
          marker_name_str = nameParts.first().toStdString();
        }
      }

      // Check if it's a marker and not already selected
      if (!marker_name_str.empty() && type_str == "Marker")
      {
        if (selected_marker_set_.count(marker_name_str) == 0)
        {
          if (!selection_result.empty())
          {
            selection_result += ",";
          }
          selection_result += marker_name_str;
          selected_marker_set_.insert(marker_name_str);
          selected_marker_count_++;
          
          RCLCPP_DEBUG(node_->get_logger(), "Selected marker: %s", marker_name_str.c_str());
        }
      }
    }

    row++;
  }

  // Publish selected elements
  if (selected_marker_count_ > 0)
  {
    std_msgs::msg::String msg;
    msg.data = selection_result;
    selection_pub_->publish(msg);
    
    RCLCPP_INFO(node_->get_logger(), "Selected %d element(s): %s", 
                selected_marker_count_, selection_result.c_str());
    
    setStatus(QString("Selected %1 element(s)").arg(selected_marker_count_));
  }
  else
  {
    RCLCPP_DEBUG(node_->get_logger(), "No markers selected");
    setStatus("No elements selected");
  }
}

}  // namespace graph_creator_rviz_plugin
