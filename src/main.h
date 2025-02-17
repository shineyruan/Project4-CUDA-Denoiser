#pragma once

#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <cuda_gl_interop.h>
#include <cuda_runtime.h>
#include <stdlib.h>

#include <fstream>
#include <glm/glm.hpp>
#include <glm/gtx/transform.hpp>
#include <iostream>
#include <sstream>
#include <string>

#include "glslUtility.hpp"
#include "image.h"
#include "pathtrace.h"
#include "scene.h"
#include "sceneStructs.h"
#include "utilities.h"

//-------------------------------
//----------PATH TRACER----------
//-------------------------------

extern Scene* scene;
extern int iteration;

extern int width;
extern int height;

extern int ui_iterations;
extern int startupIterations;
extern bool ui_showGbuffer_normal;
extern bool ui_showGbuffer_position;
extern bool ui_showGbuffer_weight;
extern bool ui_showGbuffer_posWeight;
extern bool ui_showGbuffer_norWeight;
extern bool ui_showGbuffer_colorWeight;
extern bool ui_denoise;
extern bool ui_showDenoisedImage;
extern int ui_filterSize;
extern float ui_colorWeight;
extern float ui_normalWeight;
extern float ui_positionWeight;
extern bool ui_saveAndExit;

void runCuda();
void keyCallback(GLFWwindow* window, int key, int scancode, int action,
                 int mods);
void mousePositionCallback(GLFWwindow* window, double xpos, double ypos);
void mouseButtonCallback(GLFWwindow* window, int button, int action, int mods);
