# include directories
include_directories(
        ${Vulkan_INCLUDE_DIRS}
        vendor/glfw/include
        vendor/glm
        vendor/imgui
        vendor/spdlog/include
        Engine/src
)

# dependencies
add_subdirectory(vendor/glfw)
add_subdirectory(vendor/glm)
add_subdirectory(vendor/spdlog)

add_compile_definitions(VELWIN_EXPORTS)

set(SOURCES
        src/Velwin.h
        src/Velwin/Core.h
        src/Velwin/Log.cpp
        src/Velwin/Log.h
        src/Velwin/Application.cpp
        src/Velwin/Application.h
        src/Velwin/EntryPoint.h)

add_library("Engine" SHARED ${SOURCES})

# link libraries
target_link_libraries("Engine"
        glfw
        glm
        spdlog
        ${Vulkan_LIBRARIES})