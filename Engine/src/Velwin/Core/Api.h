#pragma once

#ifdef VELWIN_SHARED
    #ifdef _WIN32
        #define PLATFORM_WINDOWS
    #endif

    #ifdef linux
        #define PLATFORM_LINUX
    #endif

    #ifdef __APPLE__
        #define PLATFORM_MACOS
    #endif

    #if defined(PLATFORM_WINDOWS)
        #if defined(VELWIN_EXPORTS)
            #define VELWIN_API __declspec(dllexport)
        #else
            #define VELWIN_API __declspec(dllimport)
        #endif
    #endif

    #if defined(PLATFORM_LINUX) || defined(PLATFORM_MACOS)
        #ifdef VELWIN_EXPORTS
            #define VELWIN_API __attribute__((visibility("default")))
        #else
            #define VELWIN_API
        #endif
    #endif
#else
    #define VELWIN_API
#endif