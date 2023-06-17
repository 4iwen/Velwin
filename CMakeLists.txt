cmake_minimum_required(VERSION 3.25)
project(Velwin VERSION 0.1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/build/${CMAKE_BUILD_TYPE})

find_package(Vulkan REQUIRED)

# include directories
include_directories(
        vendor/glfw/include
        vendor/glm
        ${Vulkan_INCLUDE_DIRS})

# dependencies
add_subdirectory(vendor/glfw)
add_subdirectory(vendor/glm)

# projects
add_subdirectory(Engine)
add_subdirectory(Editor)

# link libraries
target_link_libraries(Engine
        glfw
        glm
        ${Vulkan_LIBRARIES})
target_link_libraries(Editor PRIVATE Engine)