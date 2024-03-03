//Nama : Abyan Setyaneva
//NIM  : 24060122130058
//Lab  : B2

#include <GL/glut.h>
	
void Pyramid() {
    glClear(GL_COLOR_BUFFER_BIT);
    

    glBegin(GL_QUAD_STRIP);
    glColor3f(1.0f, 0, 0);
    glVertex2f(-0.21, 0.54);
    glVertex2f(0.09, 0.54);
    glVertex2f(-0.21, 0.84);
    glVertex2f(0.09, 0.84);
    glEnd();
    

    glBegin(GL_QUAD_STRIP);
    glColor3f(0, 0, 0);
    glVertex2f(-0.38, 0.22);
    glVertex2f(-0.08, 0.22);
    glVertex2f(-0.38, 0.52);
    glVertex2f(-0.08, 0.52);
    glEnd();
    
 
        glBegin(GL_QUAD_STRIP);
    glColor3f(0, 0, 0);
    glVertex2f(-0.06, 0.22);
    glVertex2f(0.24, 0.22);
    glVertex2f(-0.06, 0.52);
    glVertex2f(0.24, 0.52);
    glEnd();
    
  
    glBegin(GL_QUAD_STRIP);
    glColor3f(1.0f, 0, 0); 
    glVertex2f(-0.55, -0.1);
    glVertex2f(-0.25, -0.1);
    glVertex2f(-0.55, 0.2);
    glVertex2f(-0.25, 0.2);
    glEnd();
    

    glBegin(GL_QUAD_STRIP);
    glColor3f(1.0f, 0, 0);
    glVertex2f(-0.23, -0.1);
    glVertex2f(0.07, -0.1);
    glVertex2f(-0.23, 0.2);
    glVertex2f(0.07, 0.2);
    glEnd();
    
    
    glBegin(GL_QUAD_STRIP);
    glColor3f(1.0f, 0, 0);
    glVertex2f(0.09, -0.1);
    glVertex2f(0.39, -0.1);
    glVertex2f(0.09, 0.2);
    glVertex2f(0.39, 0.2);
    glEnd();
    
    
    glBegin(GL_QUAD_STRIP);
    glColor3f(0, 0, 0) ;
    glVertex2f(-0.72, -0.12);
    glVertex2f(-0.42, -0.12);
    glVertex2f(-0.72, -0.42);
    glVertex2f(-0.42, -0.42);
    glEnd();
    
    

   
    glBegin(GL_QUAD_STRIP);
    glColor3f(0, 0, 0) ;
    glVertex2f(-0.4, -0.12);
    glVertex2f(-0.1, -0.12);
    glVertex2f(-0.4, -0.42);
    glVertex2f(-0.1, -0.42);
    glEnd();

   
    glBegin(GL_QUAD_STRIP);
    glColor3f(0, 0, 0) ;
    glVertex2f(-0.08, -0.12);
    glVertex2f(0.24, -0.12);
    glVertex2f(-0.08, -0.42);
    glVertex2f(0.24, -0.42);
    glEnd();

    
    glBegin(GL_QUAD_STRIP);
    glColor3f(0, 0, 0) ;
    glVertex2f(0.26, -0.12);
    glVertex2f(0.56, -0.12);
    glVertex2f(0.26, -0.42);
    glVertex2f(0.56, -0.42);
    glEnd();

    glFlush();
}



int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Pyramid");
    glClearColor(1.0, 1.0, 1.0, 1.0);
    glutDisplayFunc(Pyramid);
    glutMainLoop();
    return 0;
}
