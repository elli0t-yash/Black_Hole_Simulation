#include <GL/gl.h>
#include <GL/glut.h>

void display() {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();

    // Set up the camera position
    gluLookAt(0.0, 0.0, 5.0,  // eye position
        0.0, 0.0, 0.0,  // look-at position
        0.0, 1.0, 0.0); // up direction

    // Draw a sphere
    glColor3f(1.0, 1.0, 1.0); // Set sphere color (white)
    glutSolidSphere(1.0, 50, 50); // Parameters: radius, slices, stacks

    glutSwapBuffers();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
    glutInitWindowSize(800, 600);
    glutCreateWindow("Sphere Example");

    glClearColor(0.0, 0.0, 0.0, 1.0);  // Set clear color to black
    glEnable(GL_DEPTH_TEST);           // Enable depth testing

    glutDisplayFunc(display);
    glutMainLoop();

    return 0;
}
