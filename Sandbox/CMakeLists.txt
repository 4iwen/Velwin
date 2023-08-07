include_directories(
        ../Engine/src
)

set(
        SOURCE_FILES

        main.cpp
)

add_executable(
        Sandbox

        ${SOURCE_FILES}
)

target_link_libraries(
        Sandbox PRIVATE

        Engine
)
