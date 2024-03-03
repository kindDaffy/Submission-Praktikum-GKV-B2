/*
Ananda Putra Bayu	
24060122140125
 */

#include <GL/glut.h>
#include <stdlib.h>
void
Quads(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_QUADS);
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
	glutCreateWindow("Quads");
	glutDisplayFunc(Quads);	
	glClearColor (1.0f, 0.0f, 0.0f, 0.0f);
	glutMainLoop();
return 0;
}

