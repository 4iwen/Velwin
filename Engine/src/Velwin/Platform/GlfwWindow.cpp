#include "GlfwWindow.h"

#include "GLFW/glfw3.h"

GlfwWindow::GlfwWindow(uint32_t width, uint32_t height) {
    data.width = width;
    data.height = height;
}

void GlfwWindow::createWindow() {
    glfwInit();

    glfwWindowHint(GLFW_CLIENT_API, GLFW_OPENGL_API);
    glfwWindowHint(GLFW_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    handle = glfwCreateWindow(data.width, data.height, data.title.c_str(), nullptr, nullptr);

    glfwMakeContextCurrent((GLFWwindow*) handle);
    glfwSwapInterval(data.vSync);

    // 🤓
    glfwRequestWindowAttention((GLFWwindow*)handle);
}

void GlfwWindow::destroyWindow() {
    glfwDestroyWindow((GLFWwindow*)handle);
    handle = nullptr;
}

void GlfwWindow::pollWindowEvents() {
    glfwPollEvents();
}

void GlfwWindow::updateSize() {
    glfwSetWindowSize((GLFWwindow*)handle, data.width, data.height);
}

void GlfwWindow::updateTitle() {
    glfwSetWindowTitle((GLFWwindow*)handle, data.title.c_str());
}

void GlfwWindow::updateVSync() {
    glfwSwapInterval(data.vSync);
}
