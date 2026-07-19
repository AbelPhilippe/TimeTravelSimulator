#include "glad.h"
#include <GLFW/glfw3.h>

#include "config.h"
#include "simulation.h"

#include <iostream>
#include <ctime>
#include <cstdlib>

int main()
{
    srand(time(NULL));

    if (!glfwInit())
    {
        std::cout << "Error GLFW\n";
        return -1;
    }

    GLFWwindow* window = glfwCreateWindow(
        WIDTH,
        HEIGHT,
        "Time Travel Simulator",
        NULL,
        NULL
    );

    if (!window)
    {
        glfwTerminate();
        return -1;
    }

    glfwMakeContextCurrent(window);

    if (!gladLoadGL())
    {
        std::cout << "Error GLAD\n";
        glfwTerminate();
        return -1;
    }

    TimeTravel sim;

    while (!glfwWindowShouldClose(window))
    {
        glClear(GL_COLOR_BUFFER_BIT);

        sim.update();
        sim.render();

        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    glfwTerminate();

    return 0;
}