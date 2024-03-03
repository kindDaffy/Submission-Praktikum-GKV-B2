/*
Ananda Putra Bayu	
24060122140125
 */

#include <GL/glut.h>
#include <stdlib.h>
void
LineLoop(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_LINE_LOOP);
    glVertex2f(-0.5, 0.0);
    glVertex2f(0.0, 0.5);
    glVertex2f(0.5, 0.0);
    
    glEnd();	glFlush();
    
}	
int main(int argc, char*argv[])
{
	glutInit(&argc, argv);
	glutInitWindowSize(640,480);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutCreateWindow("line loop");
	glutDisplayFunc(LineLoop);	
	glClearColor (0.0f, 0.0f, 0.0f, 0.0f);
	glutMainLoop();
return 0;
}

