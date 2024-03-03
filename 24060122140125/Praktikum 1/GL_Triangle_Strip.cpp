/*
Ananda Putra Bayu	
24060122140125
 */

#include <GL/glut.h>
#include <stdlib.h>
void
TriangleStrip(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_TRIANGLE_STRIP);
    glVertex2f(-0.5, 0.0);
    glVertex2f(0.5, 0.0);
    glVertex2f(-0.4, 0.2);
    glVertex2f(0.4, 0.2);
    glVertex2f(-0.3, 0.4);
    glVertex2f(0.3, 0.4);
    
    glEnd();	glFlush();
    
}	
int main(int argc, char*argv[])
{
	glutInit(&argc, argv);
	glutInitWindowSize(640,480);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutCreateWindow("Triangle Strip");
	glutDisplayFunc(TriangleStrip);	
	glClearColor (0.0f, 0.0f, 0.0f, 0.0f);
	glutMainLoop();
return 0;
}

