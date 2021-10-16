#pragma once

// Version of OpenGL used by the engine

namespace ft {
namespace gl {
namespace basegl {

struct t_version {
    int major;
    int minor;
};  // struct t_version

inline constexpr auto g_opengl_version = t_version{ 4, 6 };

}   // namespace basegl
}   // namespace gl
}   // namespace ft
