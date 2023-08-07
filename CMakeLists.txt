cmake_minimum_required(VERSION 3.25)
project(Velwin VERSION 0.1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/bin)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/bin)

option(BUILD_SANDBOX "Build the sandbox application" ON)
option(VELWIN_BUILD_SHARED "Build Velwin as a shared library" ON)

# projectss
add_subdirectory(Engine)

if (BUILD_SANDBOX)
    add_subdirectory(Sandbox)
endif ()