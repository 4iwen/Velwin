#pragma once

#include "Core.h"
#include "spdlog/spdlog.h"
#include "spdlog/sinks/stdout_color_sinks.h"

namespace Velwin {
    class VELWIN_API Log {
    public:
        static void Init();

        inline static std::shared_ptr <spdlog::logger> &GetCoreLogger() { return s_CoreLogger; }

        inline static std::shared_ptr <spdlog::logger> &GetClientLogger() { return s_ClientLogger; }

    private:
        static std::shared_ptr <spdlog::logger> s_CoreLogger;
        static std::shared_ptr <spdlog::logger> s_ClientLogger;
    };
}

// Core log macros
#define LOG_CORE_DEBUG(...) ::Velwin::Log::GetCoreLogger()->debug(__VA_ARGS__)
#define LOG_CORE_INFO(...) ::Velwin::Log::GetCoreLogger()->info(__VA_ARGS__)
#define LOG_CORE_WARNING(...) ::Velwin::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define LOG_CORE_ERROR(...) ::Velwin::Log::GetCoreLogger()->error(__VA_ARGS__)
#define LOG_CORE_CRITICAL(...) ::Velwin::Log::GetCoreLogger()->critical(__VA_ARGS__)

// Client log macros
#define LOG_DEBUG(...) ::Velwin::Log::GetClientLogger()->debug(__VA_ARGS__)
#define LOG_INFO(...) ::Velwin::Log::GetClientLogger()->info(__VA_ARGS__)
#define LOG_WARNING(...) ::Velwin::Log::GetClientLogger()->warn(__VA_ARGS__)
#define LOG_ERROR(...) ::Velwin::Log::GetClientLogger()->error(__VA_ARGS__)
#define LOG_CRITICAL(...) ::Velwin::Log::GetClientLogger()->critical(__VA_ARGS__)