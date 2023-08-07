#include "Window.h"
#include "Platform/GlfwWindow.h"

void Window::setWidth(uint32_t width) {
    data.width = width;
    if (handle)
        updateSize();
}

void Window::setHeight(uint32_t height) {
    data.height = height;
    if (handle)
        updateSize();
}

void Window::setTitle(std::string& title) {
    data.title = title;
    if (handle)
        updateTitle();
}

void Window::setVSync(bool enable) {
    data.vSync = enable;
    if (handle)
        updateVSync();
}

std::unique_ptr<Window> Window::Create(uint32_t width, uint32_t height) {
    return std::make_unique<GlfwWindow>(width, height);
}