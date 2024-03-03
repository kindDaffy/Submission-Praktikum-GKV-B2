//
//  punyafebi2.cpp
//  testGKV
//
//  Created by wahidatuzzahro febria fithrurrahmah on 26/02/24.
//
//  Nama    : Wahidatuzzahro Febria Fithrurrahmah
//  NIM     : 24060122120008
//  Lab     : B2
//  Tanggal : Senin, 19 Februari 2024

#include <GLUT/glut.h>

void Kubus(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.0f, 1.0f);
    glVertex3f(-0.80, -0.60, 0.0);
    glVertex3f(-0.60, -0.60, 0.0);
    glVertex3f(-0.60, -0.80, 0.0);
    glVertex3f(-0.80, -0.80, 0.0);
    glEnd();
    
    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex3f(-0.59, -0.60, 0.0);
    glVertex3f(-0.39, -0.60, 0.0);
    glVertex3f(-0.39, -0.80, 0.0);
    glVertex3f(-0.59, -0.80, 0.0);
    glEnd();
    
    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex3f(-0.38, -0.60, 0.0);
    glVertex3f(-0.18, -0.60, 0.0);
    glVertex3f(-0.18, -0.80, 0.0);
    glVertex3f(-0.38, -0.80, 0.0);
    glEnd();
    
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 3.0f);
    glVertex3f(-0.17, -0.60, 0.0);
    glVertex3f(0.03, -0.60, 0.0);
    glVertex3f(0.03, -0.80, 0.0);
    glVertex3f(-0.17, -0.80, 0.0);
    glEnd();
    
    glBegin(GL_QUADS);
    glColor3f(0.0f, 2.0f, 1.0f);
    glVertex3f(0.24, -0.60, 0.0);
    glVertex3f(0.04, -0.60, 0.0);
    glVertex3f(0.04, -0.80, 0.0);
    glVertex3f(0.24, -0.80, 0.0);
    glEnd();
    
    glBegin(GL_QUADS);
    glColor3f(1.0f, 2.0f, 1.0f);
    glVertex3f(0.25, -0.60, 0.0);
    glVertex3f(0.45, -0.60, 0.0);
    glVertex3f(0.45, -0.80, 0.0);
    glVertex3f(0.25, -0.80, 0.0);
    glEnd();
    
    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.0f, 1.0f);
    glVertex3f(0.46, -0.60, 0.0);
    glVertex3f(0.66, -0.60, 0.0);
    glVertex3f(0.66, -0.80, 0.0);
    glVertex3f(0.46, -0.80, 0.0);
    glEnd();
    
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 4.0f);
    glVertex3f(-0.70, -0.39, 0.0);
    glVertex3f(-0.50, -0.39, 0.0);
    glVertex3f(-0.50, -0.59, 0.0);
    glVertex3f(-0.70, -0.59, 0.0);
    glEnd();
    
    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.0f, 1.0f);
    glVertex3f(-0.49, -0.39, 0.0);
    glVertex3f(-0.29, -0.39, 0.0);
    glVertex3f(-0.29, -0.59, 0.0);
    glVertex3f(-0.49, -0.59, 0.0);
    glEnd();
    
    glBegin(GL_QUADS);
    glColor3f(0.0f, 1.0f, 1.0f);
    glVertex3f(-0.28, -0.39, 0.0);
    glVertex3f(-0.08, -0.39, 0.0);
    glVertex3f(-0.08, -0.59, 0.0);
    glVertex3f(-0.28, -0.59, 0.0);
    glEnd();
    
    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.0f, 1.0f);
    glVertex3f(-0.07, -0.39, 0.0);
    glVertex3f(0.13, -0.39, 0.0);
    glVertex3f(0.13, -0.59, 0.0);
    glVertex3f(-0.07, -0.59, 0.0);
    glEnd();
    
    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex3f(0.14, -0.39, 0.0);
    glVertex3f(0.34, -0.39, 0.0);
    glVertex3f(0.34, -0.59, 0.0);
    glVertex3f(0.14, -0.59, 0.0);
    glEnd();
    
    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex3f(0.35, -0.39, 0.0);
    glVertex3f(0.55, -0.39, 0.0);
    glVertex3f(0.55, -0.59, 0.0);
    glVertex3f(0.35, -0.59, 0.0);
    glEnd();
    
    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex3f(-0.60, -0.18, 0.0);
    glVertex3f(-0.40, -0.18, 0.0);
    glVertex3f(-0.40, -0.38, 0.0);
    glVertex3f(-0.60, -0.38, 0.0);
    glEnd();
    
    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex3f(-0.39, -0.18, 0.0);
    glVertex3f(-0.19, -0.18, 0.0);
    glVertex3f(-0.19, -0.38, 0.0);
    glVertex3f(-0.39, -0.38, 0.0);
    glEnd();
    
    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex3f(-0.18, -0.18, 0.0);
    glVertex3f(0.02, -0.18, 0.0);
    glVertex3f(0.02, -0.38, 0.0);
    glVertex3f(-0.18, -0.38, 0.0);
    glEnd();
    
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 1.0f);
    glVertex3f(0.03, -0.18, 0.0);
    glVertex3f(0.23, -0.18, 0.0);
    glVertex3f(0.23, -0.38, 0.0);
    glVertex3f(0.03, -0.38, 0.0);
    glEnd();
    
    glBegin(GL_QUADS);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex3f(0.24, -0.18, 0.0);
    glVertex3f(0.44, -0.18, 0.0);
    glVertex3f(0.44, -0.38, 0.0);
    glVertex3f(0.24, -0.38, 0.0);
    glEnd();
    
    glBegin(GL_QUADS);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex3f(-0.50, 0.03, 0.0);
    glVertex3f(-0.30, 0.03, 0.0);
    glVertex3f(-0.30, -0.17, 0.0);
    glVertex3f(-0.50, -0.17, 0.0);
    glEnd();
    
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 1.0f);
    glVertex3f(-0.29, 0.03, 0.0);
    glVertex3f(-0.09, 0.03, 0.0);
    glVertex3f(-0.09, -0.17, 0.0);
    glVertex3f(-0.29, -0.17, 0.0);
    glEnd();
    
    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.0f, 1.0f);
    glVertex3f(-0.08, 0.03, 0.0);
    glVertex3f(0.12, 0.03, 0.0);
    glVertex3f(0.12, -0.17, 0.0);
    glVertex3f(-0.08, -0.17, 0.0);
    glEnd();
    
    glBegin(GL_QUADS);
    glColor3f(1.0f, 2.0f, 0.0f);
    glVertex3f(0.13, 0.03, 0.0);
    glVertex3f(0.33, 0.03, 0.0);
    glVertex3f(0.33, -0.17, 0.0);
    glVertex3f(0.13, -0.17, 0.0);
    glEnd();
    
    glBegin(GL_QUADS);
    glColor3f(0.0f, 2.0f, 1.0f);
    glVertex3f(-0.40, 0.24, 0.0);
    glVertex3f(-0.20, 0.24, 0.0);
    glVertex3f(-0.20, 0.04, 0.0);
    glVertex3f(-0.40, 0.04, 0.0);
    glEnd();
    
    glBegin(GL_QUADS);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex3f(-0.19, 0.24, 0.0);
    glVertex3f(0.01, 0.24, 0.0);
    glVertex3f(0.01, 0.04, 0.0);
    glVertex3f(-0.19, 0.04, 0.0);
    glEnd();
    
    glBegin(GL_QUADS);
    glColor3f(1.0f, .0f, 1.0f);
    glVertex3f(0.02, 0.24, 0.0);
    glVertex3f(0.22, 0.24, 0.0);
    glVertex3f(0.22, 0.04, 0.0);
    glVertex3f(0.02, 0.04, 0.0);
    glEnd();
    
    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex3f(-0.30, 0.45, 0.0);
    glVertex3f(-0.10, 0.45, 0.0);
    glVertex3f(-0.10, 0.25, 0.0);
    glVertex3f(-0.30, 0.25, 0.0);
    glEnd();
    
    glBegin(GL_QUADS);
    glColor3f(0.0f, 1.0f, 1.0f);
    glVertex3f(-0.09, 0.45, 0.0);
    glVertex3f(0.11, 0.45, 0.0);
    glVertex3f(0.11, 0.25, 0.0);
    glVertex3f(-0.09, 0.25, 0.0);
    glEnd();
    
    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex3f(-0.20, 0.66, 0.0);
    glVertex3f(0.00, 0.66, 0.0);
    glVertex3f(0.00, 0.46, 0.0);
    glVertex3f(-0.20, 0.46, 0.0);
    glEnd();
    
    glFlush();
}

int main(int argc, char* argv[]) {
    glutInit(&argc, argv);
    glutInitWindowSize(640, 480);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("Tugas Nomor 2");
    glutDisplayFunc(Kubus);
    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
    glutMainLoop();
    return 0;
}

