/*
Ananda Putra Bayu	
24060122140125
 */

#include <GL/glut.h>
#include <stdlib.h>
void
QuadStrip(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_QUAD_STRIP);
    glVertex2f(-0.5, -0.5);
    glVertex2f(0.5, -0.5);
    glVertex2f(0.5, 0.5);
    glVertex2f(-0.5, 0.5);
    
    glEnd();	glFlush();
    
}	
int main(int argc, char*argv[])
{
	glutInit(&argc, argv);
	glutInitWindowSize(640,480);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutCreateWindow("Quad Strip");
	glutDisplayFunc(QuadStrip);	
	glClearColor (1.0f, 0.0f, 0.0f, 0.0f);
	glutMainLoop();
return 0;
}

