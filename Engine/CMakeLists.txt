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

set(
        SOURCE_FILES
        src/Velwin.h
        src/Velwin/Core/Api.h
        src/Velwin/Log.cpp
        src/Velwin/Log.h
        src/Velwin/Application.cpp
        src/Velwin/Application.h
        src/Velwin/EntryPoint.h
)

if (VELWIN_BUILD_SHARED)
    add_compile_definitions(VELWIN_SHARED VELWIN_EXPORTS)
    add_library(Engine SHARED ${SOURCE_FILES})
else ()
    add_compile_definitions(VELWIN_EXPORTS)
    add_library(Engine STATIC ${SOURCE_FILES})
endif ()

# link libraries
target_link_libraries(Engine
        glfw
        glm
        spdlog
        ${Vulkan_LIBRARIES})