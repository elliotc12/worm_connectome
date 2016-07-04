#include <stdio.h>
#include <stdlib.h>
#include <thread>

#include <GL/glew.h>

#if defined __APPLE__
    #include <OpenGL/gl.h>
    #include <OpenGL/glu.h>
    #include <GLUT/glut.h>
#else
    #include <GL/gl.h>
    #include <GL/glu.h>
    #include <GL/glut.h>
#endif

#include <GLFW/glfw3.h>
#include <glm/glm.hpp>

// Initialise GLFW

int main() {
  glfwInit(); // turn on context-creation code -- no parameters, writes to global variables defined in above headers

  glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);  // set the values of global variables
  glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 2);
  glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);  // make our big state machine a core state machine
  glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);

  glfwWindowHint(GLFW_RESIZABLE, GL_FALSE);

  GLFWwindow* window =
    glfwCreateWindow(800, 600, "OpenGL", glfwGetPrimaryMonitor(), nullptr); // GLFW talks to X11 to get display info, somehow talks to X11 and makes a window

  glfwMakeContextCurrent(window); // GLFW sets the current windows context to ours

  glewExperimental = GL_TRUE;
  glewInit();  // library which talks to drivers and finds where their functions are defined (dynamically linking in code)

  GLuint vertexBuffer;
  glGenBuffers(1, &vertexBuffer);

  printf("%u\n", vertexBuffer);

  while(!glfwWindowShouldClose(window)) {
    glfwSwapBuffers(window);
    glfwPollEvents();

    if (glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS) glfwSetWindowShouldClose(window, GL_TRUE);
  }
  
  glfwTerminate();
}
