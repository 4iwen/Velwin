cmake_minimum_required(VERSION 3.25)
project(Velwin VERSION 0.1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fPIC")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/build/${CMAKE_BUILD_TYPE})

find_package(Vulkan REQUIRED)

# include directories
include_directories(
        vendor/glfw/include
        vendor/glm
        vendor/spdlog/include
        engine/src
        ${Vulkan_INCLUDE_DIRS})

# dependencies
add_subdirectory(vendor/glfw)
add_subdirectory(vendor/glm)
add_subdirectory(vendor/spdlog)

# projects
add_subdirectory(engine)
add_subdirectory(editor)

# link libraries
target_link_libraries(engine
        glfw
        glm
        spdlog
        ${Vulkan_LIBRARIES})
target_link_libraries(editor PRIVATE engine)