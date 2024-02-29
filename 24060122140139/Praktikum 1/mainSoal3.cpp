// Nama : Adinda Rizka Hamdasati
// NIM  : 24060122140139
// Lab  : GKV B2

#include <GLUT/glut.h>

void soal3(void) {
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 1.0f);
    glVertex2f(0.0, 0.0);
    glVertex2f(0.0, 0.10);
    glVertex2f(0.10, 0.10);
    glVertex2f(0.10, 0.0);
    glEnd();
    
    glBegin(GL_LINE_LOOP);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.0, 0.0);
    glVertex2f(0.0, 0.10);
    glVertex2f(0.10, 0.10);
    glVertex2f(0.10, 0.0);
    glEnd();
    
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 1.0f);
    glVertex2f(0.12, 0.0);
    glVertex2f(0.12, 0.10);
    glVertex2f(0.22, 0.10);
    glVertex2f(0.22, 0.0);
    glEnd();
    
    glBegin(GL_LINE_LOOP);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.12, 0.0);
    glVertex2f(0.12, 0.10);
    glVertex2f(0.22, 0.10);
    glVertex2f(0.22, 0.0);
    glEnd();
    
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 1.0f);
    glVertex2f(0.24, 0.0);
    glVertex2f(0.24, 0.10);
    glVertex2f(0.34, 0.10);
    glVertex2f(0.34, 0.0);
    glEnd();
    
    glBegin(GL_LINE_LOOP);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.24, 0.0);
    glVertex2f(0.24, 0.10);
    glVertex2f(0.34, 0.10);
    glVertex2f(0.34, 0.0);
    glEnd();
    
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 1.0f);
    glVertex2f(0.06, 0.10);
    glVertex2f(0.06, 0.20);
    glVertex2f(0.16, 0.20);
    glVertex2f(0.16, 0.10);
    glEnd();
    
    glBegin(GL_LINE_LOOP);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.06, 0.10);
    glVertex2f(0.06, 0.20);
    glVertex2f(0.16, 0.20);
    glVertex2f(0.16, 0.10);
    glEnd();
    
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 1.0f);
    glVertex2f(0.18, 0.10);
    glVertex2f(0.18, 0.20);
    glVertex2f(0.28, 0.20);
    glVertex2f(0.28, 0.10);
    glEnd();
    
    glBegin(GL_LINE_LOOP);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.18, 0.10);
    glVertex2f(0.18, 0.20);
    glVertex2f(0.28, 0.20);
    glVertex2f(0.28, 0.10);
    glEnd();
}

void Display(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    
    soal3();
    
    glFlush();
}

int main(int argc, char* argv[]) {
    glutInit(&argc, argv);
    
    glutInitWindowSize(800, 800);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("Soal3");
    glClearColor(0.10f, 0.10f, 0.10f, 1.0f);
    
    glutDisplayFunc(Display);
    glutMainLoop();
    
    return 0;
}

