#pragma once

#include "Core/Api.h"
#include "Core/Base.h"

#include "Platform/GlfwWindow.h"

class VELWIN_API Window {
    struct WindowData {
        std::string title;
        uint32_t    width, height;
        bool        vSync;
    };

public:
    void*      handle = nullptr;
    WindowData data;

    virtual ~Window() = default;

    virtual void createWindow()     = 0;
    virtual void destroyWindow()    = 0;
    virtual void pollWindowEvents() = 0;

    virtual void updateSize()  = 0;
    virtual void updateTitle() = 0;
    virtual void updateVSync() = 0;

    void setWidth(uint32_t width);
    void setHeight(uint32_t height);
    void setTitle(std::string& title);
    void setVSync(bool enable);

    static std::unique_ptr<Window> Create(uint32_t width, uint32_t height);
};
