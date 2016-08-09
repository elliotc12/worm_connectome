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

#include "header.h"

enum Neurons
  {ADAL, ADAR, ADEL, ADER, ADFL, ADFR, ADLL, ADLR, AFDL, AFDR, AIAL, AIAR, AIBL,
  AIBR, AIML, AIMR, AINL, AINR, AIYL, AIYR, AIZL, AIZR, ALA, ALML, ALMR, ALNL, ALNR,
  AQR, AS1, AS2, AS3, AS4, AS5, AS6, AS7, AS8, AS9, AS10, AS11, ASEL, ASER, ASGL,
  ASGR, ASHL, ASHR, ASIL, ASIR, ASJL, ASJR, ASKL, ASKR, AUAL, AUAR, AVAL, AVAR, AVBL,
  AVBR, AVDL, AVDR, AVEL, AVER, AVFL, AVFR, AVG, AVHL, AVHR, AVJL, AVJR, AVKL, AVKR,
  AVL, AVM, AWAL, AWAR, AWBL, AWBR, AWCL, AWCR, BAGL, BAGR, BDUL, BDUR, CEPDL, CEPDR,
  CEPVL, CEPVR, DA1, DA2, DA3, DA4, DA5, DA6, DA7, DA8, DA9, DB1, DB2, DB3, DB4, DB5,
  DB6, DB7, DD1, DD2, DD3, DD4, DD5, DD6, DVA, DVB, DVC, FLPL, FLPR, HSNL, HSNR, I1L,
  I1R, I2L, I2R, I3, I4, I5, I6, IL1DL, IL1DR, IL1L, IL1R, IL1VL, IL1VR, IL2DL,
  IL2DR, IL2L, IL2R, IL2VL, IL2VR, LUAL, LUAR, M1, M2L, M2R, M3L, M3R, M4, M5, MCL,
  MCR, MI, NSML, NSMR, OLLL, OLLR, OLQDL, OLQDR, OLQVL, OLQVR, PDA, PDB, PDEL, PDER,
  PHAL, PHAR, PHBL, PHBR, PHCL, PHCR, PLML, PLMR, PLNL, PLNR, PQR, PVCL, PVCR, PVDL,
  PVDR, PVM, PVNL, PVNR, PVPL, PVPR, PVQL, PVQR, PVR, PVT, PVWL, PVWR, RIAL, RIAR,
  RIBL, RIBR, RICL, RICR, RID, RIFL, RIFR, RIGL, RIGR, RIH, RIML, RIMR, RIPL, RIPR,
  RIR, RIS, RIVL, RIVR, RMDDL, RMDDR, RMDL, RMDR, RMDVL, RMDVR, RMED, RMEL, RMER,
  RMEV, RMFL, RMFR, RMGL, RMGR, RMHL, RMHR, SAADL, SAADR, SAAVL, SAAVR, SABD, SABVL,
  SABVR, SDQL, SDQR, SIADL, SIADR, SIAVL, SIAVR, SIBDL, SIBDR, SIBVL, SIBVR, SMBDL,
  SMBDR, SMBVL, SMBVR, SMDDL, SMDDR, SMDVL, SMDVR, URADL, URADR, URAVL, URAVR, URBL,
  URBR, URXL, URXR, URYDL, URYDR, URYVL, URYVR, VA1, VA2, VA3, VA4, VA5, VA6, VA7,
  VA8, VA9, VA10, VA11, VA12, VB1, VB2, VB3, VB4, VB5, VB6, VB7, VB8, VB9, VB10,
  VB11, VC1, VC2, VC3, VC4, VC5, VC6, VD1, VD2, VD3, VD4, VD5, VD6, VD7, VD8, VD9,
  VD10, VD11, VD12, VD13, MDL07, MDL08, MDL09, MDL10, MDL11, MDL12, MDL13, MDL14,
  MDL15, MDL16, MDL17, MDL18, MDL19, MDL20, MDL21, MDL22, MDL23, MVL07, MVL08, MVL09,
  MVL10, MVL11, MVL12, MVL13, MVL14, MVL15, MVL16, MVL17, MVL18, MVL19, MVL20, MVL21,
  MVL22, MVL23, MDR07, MDR08, MDR09, MDR10, MDR11, MDR12, MDR13, MDR14, MDR15, MDR16,
  MDR17, MDR18, MDR19, MDR20, MDR21, MDR22, MDR23, MVR07, MVR08, MVR09, MVR10, MVR11,
  MVR12, MVR13, MVR14, MVR15, MVR16, MVR17, MVR18, MVR19, MVR20, MVR21, MVR22,
  MVR23, MDL05, MDR05, MDL24, MDR24, MVL03, MVR04, MVULVA, MDL01, MDL02, MDL04,
  MDR01, MDR02, MDL03, MVL01, MDR03, MVR03, MVL02, MVR01, MVR02, MVR05, MDR04,
  MVL05, MVR06, MVL04, MVL06, MDL06, MDR06, MVR24};

GLFWwindow* window;

const GLchar* vertex_shader_cstr =
    "#version 150\n"
    "in vec2 position;\n"
    "void main() {\n"
    "   gl_Position = vec4(position, 0.0, 1.0);\n"
    "}\n";

  const GLchar* fragment_shader_cstr =
    "#version 150\n"
    "out vec4 outColor;\n"
    "void main() {\n"
    "   outColor = vec4(1.0, 1.0, 1.0, 1.0);\n"
    "}\n";

void initialize_visualization() {
  glfwInit(); // turn on context-creation code -- no parameters, writes to global variables defined in above headers

  glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);  // set the values of global variables
  glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 2);
  glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);  // make our big state machine a core state machine
  glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);

  glfwWindowHint(GLFW_RESIZABLE, GL_FALSE);

  window = glfwCreateWindow(800, 600, "OpenGL", nullptr, nullptr); // GLFW talks to X11 to get display info, somehow talks to X11 and makes a window

  glfwMakeContextCurrent(window); // GLFW sets the current window's context to ours

  glewExperimental = GL_TRUE;
  glewInit();  // library which talks to drivers and finds where their functions are defined (dynamically linking in code)

  GLuint vertexBuffer;
  glGenBuffers(1, &vertexBuffer);

  GLuint vao;
  glGenVertexArrays(1, &vao); // a datatype to store genbuffers?
  glBindVertexArray(vao);

  GLuint vbo;
  glGenBuffers(1, &vbo); // Generate 1 buffer, an OpenGL "pointer"
  glBindBuffer(GL_ARRAY_BUFFER, vbo); // set vbo as the "current array"

  GLuint ebo;
  glGenBuffers(1, &ebo); // Generate 1 buffer
  glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, ebo); // set ebo as the "current element array"

  GLuint vertexShader = glCreateShader(GL_VERTEX_SHADER); // make a vertex shader object
  glShaderSource(vertexShader, 1, &vertex_shader_cstr, NULL);
  glCompileShader(vertexShader);

  GLuint fragmentShader = glCreateShader(GL_FRAGMENT_SHADER); // make a vertex shader object
  glShaderSource(fragmentShader, 1, &fragment_shader_cstr, NULL);
  glCompileShader(fragmentShader);

  GLint status;
  glGetShaderiv(vertexShader, GL_COMPILE_STATUS, &status); // store compile status of v shader in status
  if (!status) {
    char buffer[512];
    glGetShaderInfoLog(vertexShader, 512, NULL, buffer);
    printf("Couldn't compile vertex shader! MSG: %s\n", buffer);
    exit(EXIT_FAILURE);
  }

  glGetShaderiv(fragmentShader, GL_COMPILE_STATUS, &status); // store compile status of f shader in status
  if (!status) {
    char buffer[512];
    glGetShaderInfoLog(fragmentShader, 512, NULL, buffer);
    printf("Couldn't compile fragment shader! MSG: %s\n", buffer);
    exit(EXIT_FAILURE);
  }

  GLuint shaderProgram = glCreateProgram();   // add the shaders to our program
  glAttachShader(shaderProgram, vertexShader);
  glAttachShader(shaderProgram, fragmentShader);

  glBindFragDataLocation(shaderProgram, 0, "outColor"); // specify the out variables in fragment shader

  glLinkProgram(shaderProgram); // link the program to ours
  glUseProgram(shaderProgram); // "start using" program

  GLint posAttrib = glGetAttribLocation(shaderProgram, "position"); // get a handle to the "position" input to v shader

  glVertexAttribPointer(posAttrib, // the handle, implicitly knows about vbo bc "current array"
			2,         // the size of the vector
			GL_FLOAT,  // the type
			GL_FALSE,  // whether to normalize
			0,         // spacing betwen each element in the tuple (datapoint)
			0);        // spacing between tuples (datapoints)

  glEnableVertexAttribArray(posAttrib);
  if (!glGetError()) {
    printf("There was an error initializing OpenGL.\n");
    exit(glGetError());
  }
}

int simulation_is_running() {
  return !glfwWindowShouldClose(window);
}

void update_visualization(Worm* worm) {

  double vertices[] = {
    worm->x[AVBR],  worm->y[AVBR],
    worm->x[RMGL],  worm->y[RMGL],
    worm->x[RMGR],  worm->y[RMGR],
    worm->x[ADAL],  worm->y[ADAL],
    worm->x[ADAR],  worm->y[ADAR],
    worm->x[MDL05], worm->y[MDL05],
    worm->x[MDR05], worm->y[MDR05]
  };

  GLuint elements[] = {
    0, 1, // AVBR - RMGL
    0, 2, // AVBR - RMGR
    1, 3, // RMGL, ADAL
    2, 4, // RMGR, ADAR
    3, 5, // ADAL - MDL05
    4, 6  // ADAR - MDR05
  };

  glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_DYNAMIC_DRAW); // copy data over to the "current array"
  glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(elements), elements, GL_DYNAMIC_DRAW); // use glBufferSubData when you start only editing part of the vertices
  
  glDrawElements(GL_LINES, 12, GL_UNSIGNED_INT, 0);
  glfwSwapBuffers(window);
  glfwPollEvents();
  if (glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS) glfwSetWindowShouldClose(window, GL_TRUE);
}

void terminate_visualization() {
  glfwTerminate();
}
