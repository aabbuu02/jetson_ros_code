#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <memory>

#include <dxflib/dl_dxf.h>
#include <dxflib/dl_creationadapter.h>

#include <boost/geometry.hpp>
#include <boost/geometry/geometries/point.hpp>
#include <boost/geometry/geometries/box.hpp>
#include <boost/geometry/index/rtree.hpp>
#include <boost/core/no_exceptions_support.hpp>

#include <geometry_msgs/msg/pose.hpp>
#include <geometry_msgs/msg/quaternion.hpp>
#include <graph_creator_msgs/msg/graph_generator_config.hpp>
#include <graph_msgs/msg/vertex.hpp>
#include <graph_msgs/msg/edge.hpp>
#include "graph_creator/graph_visuals.hpp"
#include <tf2_geometry_msgs/tf2_geometry_msgs.hpp>

#include "graph_creator/graph_data_types.hpp"
#include "graph_creator/graph_transformers.hpp"

namespace bg = boost::geometry;
namespace bgi = boost::geometry::index;

// TODO: This should be derived from base class for graph generators
class DxfGraphGenerator : public DL_CreationAdapter
{
public:
    DxfGraphGenerator();
    explicit DxfGraphGenerator(const graph_creator_msgs::msg::GraphGeneratorConfig &config);
    ~DxfGraphGenerator() = default;

    bool getDxfFilePath(const std::string &in_file_path, std::string &out_file_path);
    bool loadDxfFile();
    bool loadDxfFile(const std::string &file_path); // Can accept both relative and absolute paths
    
    bool generateVerticesAndEdgesListFromDxf(Graph::VertexList &vl, Graph::EdgeList &el);
    bool generateVerticesAndEdgesListFromDxf(
        const graph_creator_msgs::msg::GraphGeneratorConfig &config, 
        Graph::VertexList &vl, 
        Graph::EdgeList &el);
    
    bool checkDxfGraphGeneratorConfig(const graph_creator_msgs::msg::GraphGeneratorConfig &config) const;

private:
    Graph::Transform::VertexOrientationTransform m_vot;
    uint32_t m_vertex_counter = 0;

    using VertexPoint = bg::model::point<double, 2, bg::cs::cartesian>;
    using VertexBox = bg::model::box<VertexPoint>;
    using VertexIndex = std::pair<VertexPoint, uint32_t>;

    std::vector<VertexIndex> m_nearest_vertex_point;
    bgi::rtree<VertexIndex, bgi::quadratic<16>> m_vertex_rtree;

    double m_box_size_x = 0.025;
    double m_box_size_y = 0.025;

    void createVertexTreeQueryBox(
        const geometry_msgs::msg::Pose &pose, 
        double box_size_x, 
        double box_size_y, 
        VertexBox &query_box);

    graph_creator_msgs::msg::GraphGeneratorConfig m_config;
    Graph::VertexList m_vl;
    Graph::EdgeList m_el;
    
    std::unordered_map<std::string, uint32_t> m_vertex_map;
    std::unordered_set<std::string> m_edge_set;
    
    DL_Dxf m_dxf;

    bool addVertexFromPose(
        const geometry_msgs::msg::Pose &p, 
        const geometry_msgs::msg::Pose &p1, 
        const geometry_msgs::msg::Pose &p2, 
        Graph::Vertex &v);
    
    void computeVertexOrientationForLine(
        const geometry_msgs::msg::Pose &p1, 
        const geometry_msgs::msg::Pose &p2, 
        geometry_msgs::msg::Quaternion &q) const;
    
    bool addEdgeForLine(
        const geometry_msgs::msg::Pose &p1, 
        const geometry_msgs::msg::Pose &p2);

    // Overridden functions for DXF file parsing
    void addPoint(const DL_PointData &data) override final;
    void addLine(const DL_LineData &data) override final;
    void addPolyline(const DL_PolylineData &data) override final;
    void addSpline(const DL_SplineData &data) override final;
    void addControlPoint(const DL_ControlPointData &data) override final;
    void addKnot(const DL_KnotData &data) override final;
    void addDimAlign(const DL_DimensionData &dd, const DL_DimAlignedData &dad);
    void addDimLinear(const DL_DimensionData &dd, const DL_DimLinearData &dld);
    void addDimRadial(const DL_DimensionData &dd, const DL_DimRadialData &drd);
    void addDimDiametric(const DL_DimensionData &dd, const DL_DimDiametricData &ddd);
    void addDimAngular(const DL_DimensionData &dd, const DL_DimAngular3PData &dad);
    void addDimAngular3P(const DL_DimensionData &dd, const DL_DimAngular3PData &dad);
};
