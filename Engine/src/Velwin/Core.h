#pragma once

#ifdef _WIN32
#define PLATFORM_WINDOWS
#endif

#ifdef __linux__
#define PLATFORM_LINUX
#endif



#ifdef PLATFORM_WINDOWS
#ifdef VELWIN_EXPORTS
#define VELWIN_API __declspec(dllexport)
#else
#define VELWIN_API __declspec(dllimport)
#endif
#endif

#ifdef PLATFORM_LINUX
#ifdef VELWIN_EXPORTS
#define VELWIN_API __attribute__((visibility("default")))
#else
#define VELWIN_API
#endif
#endif