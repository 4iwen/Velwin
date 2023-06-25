#pragma once

extern Velwin::Application *Velwin::CreateApplication();

int main(int argc, char **argv) {
    Velwin::Log::Init();
    LOG_CORE_DEBUG("Debug message!");
    LOG_CORE_INFO("Hello! Var={0}", 5);
    LOG_CORE_WARNING("Warning!");
    LOG_CORE_ERROR("Error!");
    LOG_CORE_CRITICAL("Critical error!");

    LOG_DEBUG("Debug message!");
    LOG_INFO("Hello! Var={0}", 5);
    LOG_WARNING("Warning!");
    LOG_ERROR("Error!");
    LOG_CRITICAL("Critical error!");

    Velwin::Application app(Velwin::CreateApplication());
    app->Run();
}

