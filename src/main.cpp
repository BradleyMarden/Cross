#include <iostream>
#include <GL/glut.h>
#include <GL/gl.h>
#include "../Includes/test.h"

void display();
void init()
{
    glClearColor(0.30f,0.29f,0.35f,1.0);

}

int main(int argc, char **argv) {


    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
    glutInitWindowSize(900,600);
    glutCreateWindow("PathFinding");
    glutDisplayFunc(display);
    init();
    glutMainLoop();

    std::cout << "Hello, World!" << std::endl;
    test test;
    return 0;
}

void display() {

    glClear(GL_COLOR_BUFFER_BIT);
    glutSwapBuffers();
}
