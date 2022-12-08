

#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include<windows.h>
#include <GL/glut.h>
#include<GL/glu.h>

#endif

#include <stdlib.h>


/* GLUT callback Handlers */

#include <math.h>

const int n = 100;

void drawRose()
{
glBegin(GL_LINE_LOOP);
for (int i = 0; i < n; i++)
{
double theta = i * 2 * M_PI / n;
double r = sin(6 * theta);
double x = r * cos(theta);
double y = r * sin(theta);
glVertex2d(x, y);
}
glEnd();
}

void display()
{
glClear(GL_COLOR_BUFFER_BIT);
drawRose();
glFlush();
}

int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutCreateWindow("Rose Flower");
glutDisplayFunc(display);
glutMainLoop();
return 0;
}




