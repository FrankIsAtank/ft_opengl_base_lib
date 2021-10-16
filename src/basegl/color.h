#pragma once

// Basic structure for representing a color
// The values should be normalized (0.0 to 1.0)

// standard headers
#include <limits>
#include <type_traits>

namespace ft {
namespace gl {

template<class T = float>
struct color
{
    T red, green, blue;
    T alpha = std::is_floating_point_v<T> ? static_cast<T>(1.0) : (std::numeric_limits<T>::max)();
};

}   // namespace gl
}   // namespace ft
