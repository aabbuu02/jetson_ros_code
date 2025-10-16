#pragma once

#include <std_msgs/msg/color_rgba.hpp>

namespace Graph::Colors
{

struct Color
{
    float r = 1.0f;
    float g = 1.0f;
    float b = 1.0f;
    float a = 1.0f;

    // Color(float red = 1.0f, float green = 1.0f, float blue = 1.0f, float alpha = 1.0f)
    //     : r(red), g(green), b(blue), a(alpha)
    // 
    // {
    // }
    
    constexpr Color(double red, double green, double blue) : r(red), g(green), b(blue) {
        
    }


};

inline constexpr Color RED(1.0, 0.0, 0.0);
inline constexpr Color GREEN(0.0, 1.0, 0.0);
inline constexpr Color BLUE(0.0, 0.0, 1.0);
inline constexpr Color YELLOW(1.0, 1.0, 0.0);
inline constexpr Color MAGENTA(1.0, 0.0, 1.0);
inline constexpr Color CYAN(0.0, 1.0, 1.0);
inline constexpr Color WHITE(1.0, 1.0, 1.0);
inline constexpr Color GREY(0.5, 0.5, 0.5);
inline constexpr Color BLACK(0.0, 0.0, 0.0);

inline std_msgs::msg::ColorRGBA getColorRGBAMsg(const Color &color)
{
    std_msgs::msg::ColorRGBA color_msg;
    color_msg.r = color.r;
    color_msg.g = color.g;
    color_msg.b = color.b;
    color_msg.a = color.a;
    return color_msg;
}

}  // namespace Graph::Colors
