// Nama : Adinda Rizka Hamdasati
// NIM  : 24060122140139
// Lab  : GKV B2

#include <GLUT/glut.h>

void soal12(void) {
    //bidang dinding rumah
    glBegin(GL_QUAD_STRIP);
    glColor3f(0.90f, 0.66f, 0.30f);
    glVertex2f(0.5, 0.0);
    glVertex2f(0.5, 0.03);
    glVertex2f(0.0, 0.0);
    glVertex2f(0.03, 0.03);
    glVertex2f(0.0, 0.4);
    glVertex2f(0.03, 0.385);
    glVertex2f(0.27, 0.645);
    glVertex2f(0.27, 0.6);
    glVertex2f(0.545, 0.4);
    glVertex2f(0.5, 0.4);
    glEnd();
    
    //bidang pintu rumah
    glBegin(GL_QUADS);
    glColor3f(0.64f, 0.37f, 0.04f);
    glVertex2f(0.1725, 0.03);
    glVertex2f(0.1725, 0.3);
    glVertex2f(0.2725, 0.3);
    glVertex2f(0.2725, 0.03);
    glEnd();
    
    glBegin(GL_QUADS);
    glColor3f(0.64f, 0.37f, 0.04f);
    glVertex2f(0.2725, 0.03);
    glVertex2f(0.2725, 0.3);
    glVertex2f(0.3725, 0.3);
    glVertex2f(0.3725, 0.03);
    glEnd();
    
    //bidang pintu atas rumah
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(0.64f, 0.37f, 0.04f);
    glVertex2f(0.2725, 0.39);
    glVertex2f(0.1725, 0.3);
    glVertex2f(0.2125, 0.3);
    glVertex2f(0.2525, 0.3);
    glVertex2f(0.2925, 0.3);
    glVertex2f(0.3325, 0.3);
    glVertex2f(0.3725, 0.3);
    glEnd();
    
    glLineWidth(2);
    
    //garis tepi pintu atas rumah
    glBegin(GL_LINE_LOOP);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.2725, 0.39);
    glVertex2f(0.1725, 0.3);
    glVertex2f(0.2125, 0.3);
    glEnd();
    
    glBegin(GL_LINE_LOOP);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.2725, 0.39);
    glVertex2f(0.2125, 0.3);
    glVertex2f(0.2525, 0.3);
    glEnd();
    
    glBegin(GL_LINE_LOOP);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.2725, 0.39);
    glVertex2f(0.2525, 0.3);
    glVertex2f(0.2925, 0.3);
    glEnd();
    
    glBegin(GL_LINE_LOOP);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.2725, 0.39);
    glVertex2f(0.2925, 0.3);
    glVertex2f(0.3325, 0.3);
    glEnd();
    
    glBegin(GL_LINE_LOOP);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.2725, 0.39);
    glVertex2f(0.3325, 0.3);
    glVertex2f(0.3725, 0.3);
    glEnd();
    
    //garis tepi pintu rumah
    glBegin(GL_LINE_LOOP);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.1725, 0.03);
    glVertex2f(0.1725, 0.3);
    glVertex2f(0.2725, 0.3);
    glVertex2f(0.2725, 0.03);
    glEnd();
    
    glBegin(GL_LINE_LOOP);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.2725, 0.03);
    glVertex2f(0.2725, 0.3);
    glVertex2f(0.3725, 0.3);
    glVertex2f(0.3725, 0.03);
    glEnd();
    
    //garis tepi dinding rumah
    glBegin(GL_LINE_LOOP);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.5, 0.0);
    glVertex2f(0.0, 0.0);
    glVertex2f(0.0, 0.4);
    glVertex2f(0.27, 0.645);
    glVertex2f(0.545, 0.4);
    glVertex2f(0.5, 0.4);
    glVertex2f(0.27, 0.6);
    glVertex2f(0.03, 0.385);
    glVertex2f(0.03, 0.03);
    glVertex2f(0.5, 0.03);
    glEnd();
    
    //bidang atap rumah
    glBegin(GL_QUADS);
    glColor3f(0.64f, 0.37f, 0.04f);
    glVertex2f(-0.1, 0.4);
    glVertex2f(0.27, 0.745);
    glVertex2f(0.27, 0.705);
    glVertex2f(-0.06, 0.4);
    glEnd();
    
    glBegin(GL_QUADS);
    glColor3f(0.64f, 0.37f, 0.04f);
    glVertex2f(0.27, 0.745);
    glVertex2f(0.645, 0.4);
    glVertex2f(0.605, 0.4);
    glVertex2f(0.27, 0.705);
    glEnd();
    
    //bidang cerobong asap rumah
    glBegin(GL_TRIANGLE_STRIP);
    glColor3f(0.64f, 0.37f, 0.04f);
    glVertex2f(0.4575, 0.5725);
    glVertex2f(0.4575, 0.65875);
    glVertex2f(0.36375, 0.65875);
    glVertex2f(0.4575, 0.72);
    glVertex2f(0.36375, 0.72);
    glEnd();
    
    //garis tepi atap dan cerobong asap rumah
    glBegin(GL_LINE_STRIP);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.1, 0.4);
    glVertex2f(0.27, 0.745);
    glVertex2f(0.36375, 0.65875);
    glVertex2f(0.36375, 0.72);
    glVertex2f(0.4575, 0.72);
    glVertex2f(0.4575, 0.5725);
    glVertex2f(0.645, 0.4);
    glVertex2f(0.605, 0.4);
    glVertex2f(0.27, 0.705);
    glVertex2f(-0.06, 0.4);
    glVertex2f(-0.1, 0.4);
    glEnd();
}

void Display(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    
    soal12();
    
    glFlush();
}

int main(int argc, char* argv[]) {
    glutInit(&argc, argv);
    
    glutInitWindowSize(800, 800);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("Soal12");
    glClearColor(0.10f, 0.10f, 0.10f, 1.0f);
    
    glutDisplayFunc(Display);
    glutMainLoop();
    
    return 0;
}
