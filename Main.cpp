#include <GL/glew.h>
#include <GLFW/glfw3.h>

#include "Grid.h"

int main(void)
{
    GLFWwindow* window;

    if (!glfwInit())
        exit(EXIT_FAILURE);
    window = glfwCreateWindow(1080, 720, "Wave Grid", NULL, NULL);
    if (!window)
    {
        glfwTerminate();
        exit(EXIT_FAILURE);
    }
    glfwMakeContextCurrent(window);

    Grid gtest(20, 20);

    int width, height;
    while (!glfwWindowShouldClose(window))
    {
        glfwGetFramebufferSize(window, &width, &height);
        glViewport(0, 0,width,height);
        glClear(GL_COLOR_BUFFER_BIT);
        glMatrixMode(GL_PROJECTION);
        glLoadIdentity();
        glFrustum(0, width, 0, height, 0, 99999);
        glMatrixMode(GL_MODELVIEW);
        glLoadIdentity();
        glRotatef(90, 1, 2, 3);

        glScalef(.05, .05, .05);

        gtest.draw();
        gtest.wavedist();

        glfwSwapBuffers(window);
        glfwPollEvents();
    }
    glfwDestroyWindow(window);
    glfwTerminate();
    exit(EXIT_SUCCESS);
}