set(SOURCE_FILES
        src/Velwin/Core.h src/Velwin.h src/Velwin/Log.cpp src/Velwin/Log.h src/Velwin/Application.cpp src/Velwin/Application.h src/Velwin/EntryPoint.h)

add_compile_definitions(VELWIN_EXPORTS)

add_library(engine SHARED
        ${SOURCE_FILES})