////
////  punyafebi.cpp
////  testGKV
////
////  Created by wahidatuzzahro febria fithrurrahmah on 26/02/24.
////  Nama    : Wahidatuzzahro Febria Fithrurrahmah
////  NIM     : 24060122120008
////  Lab     : B2
////  Tanggal : Senin, 19 Februari 2024
//
//#include <GLUT/glut.h>
//
//void febiSatu(void) {
//    glClear(GL_COLOR_BUFFER_BIT);
//    glLineWidth(3.0f);
//    
//    glBegin(GL_LINE_STRIP);
//    glColor3f(1.0f, 1.0f, 1.0f);
//    glVertex3f(-0.50, 0.0, 0.0);
//    glVertex3f(-0.50, 0.20, 0.0);
//    glVertex3f(-0.60, 0.20, 0.0);
//    glVertex3f(-0.40, 0.50, 0.0);
//    glVertex3f(-0.20, 0.20, 0.0);
//    glVertex3f(-0.30, 0.20, 0.0);
//    glVertex3f(-0.30, 0.0, 0.0);
//    glVertex3f(-0.50, 0.0, 0.0);
//    glEnd();
//    
//    glBegin(GL_LINE_LOOP);
//    glColor3f(1.0f, 1.0f, 1.0f);
//    glVertex3f(0.50, 0.0, 0.0);
//    glVertex3f(0.50, 0.20, 0.0);
//    glVertex3f(0.20, 0.20, 0.0);
//    glVertex3f(0.40, 0.50, 0.0);
//    glVertex3f(0.60, 0.20, 0.0);
//    glVertex3f(0.30, 0.20, 0.0);
//    glVertex3f(0.30, 0.0, 0.0);
//    glEnd();
//
//    glBegin(GL_QUADS);
//    glColor3f(1.0f, 0.0f, 0.0f);
//    glVertex3f(-0.80, -0.80, 0.0);
//    glColor3f(0.0f, 1.0f, 1.0f);
//    glVertex3f(-0.60, -0.60, 0.0);
//    glColor3f(0.0f, 2.0f, 0.0f);
//    glVertex3f(-0.80, -0.60, 0.0);
//    glColor3f(1.0f, 0.0f, 0.0f);
//    glVertex3f(-0.60, -0.80, 0.0);
//    glEnd();
//    
//    glBegin(GL_QUAD_STRIP);
//    glColor3f(1.0f, 0.0f, 1.0f);
//    glVertex3f(-0.40, -0.80, 0.0);
//    glColor3f(0.0f, 1.0f, 1.0f);
//    glVertex3f(-0.40, -0.60, 0.0);
//    glColor3f(2.0f, 0.0f, 7.0f);
//    glVertex3f(-0.15, -0.80, 0.0);
//    glColor3f(1.0f, 0.0f, 0.0f);
//    glVertex3f(-0.30, -0.60, 0.0);
//    glColor3f(0.0f, 1.0f, 0.0f);
//    glEnd();
//    
//    glBegin(GL_TRIANGLE_FAN);
//    glColor3f(0.0f, 0.0f, 1.0f);
//    glVertex3f(0.25, -0.80, 0.0);
//    glColor3f(4.0f, 7.0f, 1.0f);
//    glVertex3f(0.13, -0.70, 0.0);
//    glColor3f(0.0f, 2.0f, 1.0f);
//    glVertex3f(0.20, -0.60, 0.0);
//    glColor3f(1.0f, 4.0f, 1.0f);
//    glVertex3f(0.30, -0.60, 0.0);
//    glColor3f(1.0f, 0.0f, 1.0f);
//    glVertex3f(0.37, -0.70, 0.0);
//    glEnd();
//    
//    glBegin(GL_TRIANGLE_STRIP);
//    glColor3f(0.0f, 0.0f, 1.0f);
//    glVertex3f(0.85, -0.80, 0.0);
//    glColor3f(1.0f, 0.0f, .0f);
//    glVertex3f(0.75, -0.60, 0.0);
//    glColor3f(0.0f, 1.0f, 1.0f);
//    glVertex3f(0.65, -0.60, 0.0);
//    glVertex3f(0.55, -0.80, 0.0);
//    glEnd();
//    
//    glFlush();
//}
//
//int main(int argc, char* argv[]) {
//    glutInit(&argc, argv);
//    glutInitWindowSize(640, 480);
//    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
//    glutCreateWindow("Tugas Nomor 1");
//    glutDisplayFunc(febiSatu);
//    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
//    glutMainLoop();
//    return 0;
//}
