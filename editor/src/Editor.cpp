#define GLFW_INCLUDE_VULKAN

#include "GLFW/glfw3.h"

#define GLM_FORCE_RADIANS
#define GLM_FORCE_DEPTH_ZERO_TO_ONE

#include "glm/vec4.hpp"
#include "glm/mat4x4.hpp"

#include <iostream>

#include <Velwin.h>

class Editor : public Velwin::Application {
public:
    Editor() {
        if (glfwInit()) {
            LOG_CRITICAL("Failed to initialize GLFW!");
        }

        glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);

        GLFWwindow *window = glfwCreateWindow(800, 600, "Velwin Editor", nullptr, nullptr);

        while (!glfwWindowShouldClose(window)) {
            glfwPollEvents();
        }

        glfwDestroyWindow(window);

        glfwTerminate();
    }

    ~Editor() {

    }
};

Velwin::Application *Velwin::CreateApplication() {
    return new Editor();
}