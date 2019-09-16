#pragma once

//main
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

//gl
#include <gl/glew.h>
#include <GLFW/glfw3.h>

#include <SOIL2/SOIL2.h>

//glm
#include <GLM/glm.hpp>
#include <GLM/vec2.hpp>
#include <GLM/vec3.hpp>
#include <GLM/vec4.hpp>
#include <GLM/mat4x4.hpp>
#include <GLM/gtc/matrix_transform.hpp>
#include <GLM/gtc/type_ptr.hpp>

struct Vertex
{
	glm::vec3 position;
	glm::vec3 color;
	glm::vec2 texcoord;
};