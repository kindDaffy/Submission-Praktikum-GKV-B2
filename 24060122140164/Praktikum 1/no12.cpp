#include <GL/glut.h>

void display(void) {
    glClear(GL_COLOR_BUFFER_BIT);

    // GL_LINE_STRIP
    glColor3f(1.0f, 0.0f, 0.0f);
    glBegin(GL_LINE_STRIP);
    glVertex2f(-0.1, -0.1);
    glVertex2f(0.0, 0.1);
    glVertex2f(0.1, -0.1);
    glEnd();

    // GL_LINE_LOOP
    glColor3f(0.0f, 1.0f, 0.0f);
    glBegin(GL_LINE_LOOP);
    glVertex2f(-0.4, -0.4);
    glVertex2f(0.0, 0.4);
    glVertex2f(0.4, -0.4);
    glEnd();

    glColor3f(0.0f, 1.0f, 0.0f);
    glBegin(GL_LINE_LOOP);
    glVertex2f(-0.3, -0.3);
    glVertex2f(0.0, 0.3);
    glVertex2f(0.3, -0.3);
    glEnd();

    // GL_TRIANGLE_FAN
    glColor3f(0.0f, 0.0f, 1.0f);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(0.0, 0.0);
    glVertex2f(-0.5, -0.1);
    glVertex2f(0.0, 0.1);
    glVertex2f(0.5, -0.1);
    glEnd();

    // GL_TRIANGLE_STRIP
 	//glColor3f(1.0f, 1.0f, 0.0f);
    //glBegin(GL_TRIANGLE_STRIP);
    //glVertex2f(-0.2, -0.1);
    //glVertex2f(0.0, 0.1);
    //glVertex2f(0.3, -0.1);
    //glVertex2f(0.2, 0.1);
    //glEnd();

    // GL_QUADS
    glColor3f(1.0f, 0.0f, 1.0f);
    glBegin(GL_QUADS);
    glVertex2f(-0.1, -0.1);
    glVertex2f(0.0, 0.1);
    glVertex2f(0.1, -0.1);
    glVertex2f(0.1, 0.1);
    glEnd();

    // GL_QUAD_STRIP
    glColor3f(0.5f, 0.5f, 0.5f);
    glBegin(GL_QUAD_STRIP);
    glVertex2f(-0.1, -0.1);
    glVertex2f(0.0, 0.1);
    glVertex2f(0.1, -0.1);
    glVertex2f(0.2, 0.1);
    glEnd();

    glColor3f(0.8f, 0.2f, 0.5f);
    glBegin(GL_POLYGON);
    glVertex2f(-0.2, -0.4);
    glVertex2f(0.1, -0.3);
    glVertex2f(0.2, -0.5);
    glVertex2f(0.0, -0.6);
    glVertex2f(-0.1, -0.5);
    glEnd();

    glColor3f(0.5f, 0.5f, 0.2f);
    glBegin(GL_TRIANGLES);
    glVertex2f(-0.3, 0.3);
    glVertex2f(0.0, 0.6);
    glVertex2f(0.3, 0.3);
    glEnd();

    glFlush();
}




int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutCreateWindow("2D OpenGL Primitives");
	glutInitWindowSize(640, 480);
    glutDisplayFunc(display);
   
    glutMainLoop();

    return 0;
}

