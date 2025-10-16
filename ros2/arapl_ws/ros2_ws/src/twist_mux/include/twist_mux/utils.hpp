/*********************************************************************
* Software License Agreement (CC BY-NC-SA 4.0 License)
*
* Copyright (c) 2014, PAL Robotics, S.L.
* All rights reserved.
*
* This work is licensed under the Creative Commons
* Attribution-NonCommercial-ShareAlike 4.0 International License.
*********************************************************************/

#ifndef TWIST_MUX__UTILS_HPP_
#define TWIST_MUX__UTILS_HPP_

#include <algorithm>

namespace twist_mux
{

/**
 * @brief Clamp a value to the range [min, max]
 * @param x Value to clamp
 * @param min Min value of the range
 * @param max Max value of the range
 * @return Value clamped to the range [min, max]
 */
template<typename T>
constexpr T clamp(T x, T min, T max)
{
  return std::clamp(x, min, max);
}

} // namespace twist_mux

#endif // TWIST_MUX__UTILS_HPP_
