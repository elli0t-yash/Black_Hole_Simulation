#include<GL/gl.h>
#include<GL/glut.h>

int windowWidth = 800;
int windowHeight = 600;

void reshape(int width, int height) {
	glViewport(0, 0, width, height);
}