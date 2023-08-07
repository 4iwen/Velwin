 #pragma once

#include "../Window.h"

class GlfwWindow : public Window {
    GlfwWindow(uint32_t width, uint32_t height);

    virtual void createWindow();
    virtual void destroyWindow();
    virtual void pollWindowEvents();

    virtual void updateSize();
    virtual void updateTitle();
    virtual void updateVSync();
};
