/*
Ananda Putra Bayu	
24060122140125
 */

#include <GL/glut.h>
#include <stdlib.h>
void
Muka(void)
{
	glClear(GL_COLOR_BUFFER_BIT);

    // Gambar kepala 
    glBegin(GL_QUADS);
    glColor3f(1.0, 0.8, 0.6); // Warna kulit
    glVertex2f(-0.4, -0.4);
    glVertex2f(0.4, -0.4);
    glVertex2f(0.4, 0.5);
    glVertex2f(-0.4, 0.5);
    glEnd();

    // Gambar mata kiri 
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0); // Warna hitam
    glVertex2f(-0.2, 0.1);
    glVertex2f(-0.1, 0.1);
    glVertex2f(-0.1, 0.2);
    glVertex2f(-0.2, 0.2);
    glEnd();

    // Gambar mata kanan
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0); // Warna hitam
    glVertex2f(0.1, 0.1);
    glVertex2f(0.2, 0.1);
    glVertex2f(0.2, 0.2);
    glVertex2f(0.1, 0.2);
    glEnd();

    // Gambar mulut 
    glBegin(GL_QUADS);
    glColor3f(0.8, 0.0, 0.0); // Warna merah
    glVertex2f(-0.15, -0.2);
    glVertex2f(0.15, -0.2);
    glVertex2f(0.15, -0.1);
    glVertex2f(-0.15, -0.1);
    glEnd();
    
	// Gambar hidung
	glPointSize(5.0f);
	glBegin(GL_POINTS);
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(0.0, 0.0, 0.0);
	glEnd();
	
	// Gambar Alis Mata Kiri
	glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0); // Warna hitam
    glVertex2f(-0.25, 0.3);
    glVertex2f(-0.05, 0.3);
    glVertex2f(-0.05, 0.4);
    glVertex2f(-0.25, 0.4);
    glEnd();
    
    // Gambar Alis Mata Kanan
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0); // Warna hitam
	glVertex2f(0.05, 0.3);
    glVertex2f(0.25, 0.3);
    glVertex2f(0.25, 0.4);
    glVertex2f(0.05, 0.4);
	
    
    glEnd();	glFlush();
    
}	
int main(int argc, char*argv[])
{
	glutInit(&argc, argv);
	glutInitWindowSize(640,480);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutCreateWindow("Muka");
	glutDisplayFunc(Muka);	
	glClearColor (0.1f, 0.0f, 0.1f, 1.0f);
	glutMainLoop();
return 0;
}

