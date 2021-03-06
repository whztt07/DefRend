#pragma once

#include <glew.h>

class UnitArrow
{
private:
	static GLuint VBO;
	static GLuint VAO;

public:
	static bool create();
	static void destroy();
	static void render();
};