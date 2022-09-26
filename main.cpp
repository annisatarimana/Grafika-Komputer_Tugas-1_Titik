// PROGRAM MENGGAMBAR TITIK

#include <windows.h>
#ifdef _APPLE_
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>

void draw()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0, 1.0, 1.0);

    glPointSize(5.0);
    glBegin(GL_POINTS);

    glColor3f(1.0, 0.5, 1.0);       //Warna Merah
    glVertex3f(0.9, 0.6, 0.0);
    glColor3f(1.0, 0.5, 0.0);
    glVertex2f(0.7, 0.5);
    glColor3f(0.3, 0.9, 0.7);
    glVertex2f(0.5, 0.6);
    glColor3f(1.0, 1.0, 0.4);
    glVertex2f(0.3, 0.5);
    glColor3f(0.0, 0.3, 0.6);
    glVertex2f(0.1, 0.6);
    glColor3f(0.5, 0.5, 0.5);
    glVertex2f(0.5, 0.4);

    glEnd();
    glFlush();
}

void Initialize()
{
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);
}

int main(int iArgc, char** cppArgv){
    glutInit(&iArgc, cppArgv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(250, 250);
    glutInitWindowPosition(200, 200);
    glutCreateWindow("Point");
    Initialize();
    glutDisplayFunc(draw);
    glutMainLoop();
    return 0;
}
