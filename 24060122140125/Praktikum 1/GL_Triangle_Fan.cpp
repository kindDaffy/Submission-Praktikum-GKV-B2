/*
Ananda Putra Bayu	
24060122140125
 */

#include <GL/glut.h>
#include <stdlib.h>
void
TriangleFan(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_TRIANGLE_FAN);
   
 	// titik pusat  
    glVertex2f(0.0, 0.0);

    // Titik-titik segitiga
    glVertex2f(0.5, 0.0);
    glVertex2f(0.4, 0.2);
    glVertex2f(0.2, 0.4);
    glVertex2f(0.0, 0.5);
    glVertex2f(-0.2, 0.4);
    glVertex2f(-0.4, 0.2);
    glVertex2f(-0.5, 0.0);
    glVertex2f(-0.4, -0.2);
    glVertex2f(-0.2, -0.4);
    glVertex2f(0.0, -0.5);
    glVertex2f(0.2, -0.4);
    glVertex2f(0.4, -0.2);
    glVertex2f(0.5, -0.1);
    
    glEnd();	glFlush();
    
}	
int main(int argc, char*argv[])
{
	glutInit(&argc, argv);
	glutInitWindowSize(640,480);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutCreateWindow("Triangle Fan");
	glutDisplayFunc(TriangleFan);	
	glClearColor (0.0f, 0.0f, 0.0f, 0.0f);
	glutMainLoop();
return 0;
}

