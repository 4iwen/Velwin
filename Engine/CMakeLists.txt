# include directories
include_directories(
        vendor/glfw/include
        vendor/glm
        ${Vulkan_INCLUDE_DIRS}
        vendor/imgui
        vendor/spdlog/include
        Engine/src
)

# dependencies
add_subdirectory(vendor/glfw)
add_subdirectory(vendor/glm)
add_subdirectory(vendor/spdlog)

add_library(Engine
        cmake_stinky.cpp
        cmake_stinky.h)

# link libraries
target_link_libraries("Engine"
        glfw
        glm
        spdlog
        ${Vulkan_LIBRARIES})