// Nama  	 : Muhammad Daffa Aradhana Adriansyah
// NIM 		 : 24060122120022
// Deskripsi : Tugas Praktikum 3 GKV


#include <stdio.h>
#include <stdlib.h>
#include <gl/glut.h>

static int  bahu = 0, 
			siku = 0, 
			telapak=0, 
			telunjuk1 = 0, 
			telunjuk2 = 0, 
			tengah1 = 0, 
			tengah2 = 0, 
			manis1 = 0, 
			manis2 = 0, 
			kelingking1 = 0, 
			kelingking2 = 0, 
			jempol = 0;

void init(void){
	glClearColor (0.0, 0.0, 0.0, 0.0);
	glShadeModel (GL_FLAT);
}

void display(void) {
	glClear(GL_COLOR_BUFFER_BIT);
	
	glPushMatrix();
	
		//BAHU
		glTranslatef(-1.0,0.0,0.0);
		glRotatef((GLfloat) bahu, 0.0,0.0,1.0);
		glTranslatef(1.0,0.0,0.0);
		
		glPushMatrix();
			glScalef(2.0,0.4,1.0);
			glutWireCube(1.0);
		glPopMatrix();
		
		//SIKU
		glTranslatef(1.0,0.0,0.0);
		glRotatef((GLfloat) siku, 0.0,0.0,1.0);
		glTranslatef(1.0,0.0,0.0);
		 
		glPushMatrix();
			glScalef(2.0,0.4,1.0);
			glutWireCube(1.0);
		glPopMatrix();
		
		//TELAPAK
		glTranslatef(1.0,0.0,0.0);
		glRotatef((GLfloat) telapak, 0.0,0.0,1.0);
		glTranslatef(0.5,0.0,0.0);
		
		glPushMatrix();
			glScalef(1.0,0.4 ,1.0);
			glutWireCube(1.0);
		glPopMatrix();
		
		//TELUNJUK1
		glPushMatrix();
			glTranslatef(0.5,0.0,0.0);
			glRotatef((GLfloat) telunjuk1, 0.0,0.0,1.0);
			glTranslatef(0.25,0.0,0.0);
			
			glPushMatrix();
				glScalef(0.5,0.2 ,0.20);
				glutWireCube(1.0);
			glPopMatrix();
			
			//TELUNJUK2
			glTranslatef(0.25,0.0,0.0);
			glRotatef((GLfloat) telunjuk2, 0.0,0.0,1.0);
			glTranslatef(0.25,0.0,0.0);
			
			glPushMatrix();
				glScalef(0.5,0.2 ,0.20);
				glutWireCube(1.0);
			glPopMatrix();
		glPopMatrix();
		
		//TENGAH1
		glPushMatrix();	
			glTranslatef(0.5,0.0,0.0);
			glRotatef((GLfloat) tengah1, 0.0,0.0,1.0);
			glTranslatef(0.25,0.0,0.0);
			
			glPushMatrix();
				glScalef(0.5,0.2 ,0.20);
				glutWireCube(1.0);
			glPopMatrix();
			
			//TENGAH2
			glTranslatef(0.25,0.0,0.0);
			glRotatef((GLfloat) tengah2, 0.0,0.0,1.0);
			glTranslatef(0.25,0.0,0.0);
			
			glPushMatrix();
				glScalef(0.5,0.2 ,0.20);
				glutWireCube(1.0);
			glPopMatrix();
		glPopMatrix();
		
		//MANIS1
		glPushMatrix();
			glTranslatef(0.5,0.0,-0.2);
			glRotatef((GLfloat) manis1, 0.0,0.0,1.0);
			glTranslatef(0.25,0.0,0.0);
			
			glPushMatrix();
				glScalef(0.5,0.2 ,0.20);
				glutWireCube(1.0);
			glPopMatrix();
			
			//MANIS2
			glTranslatef(0.25,0.0,0.0);
			glRotatef((GLfloat) manis2, 0.0,0.0,1.0);
			glTranslatef(0.25,0.0,0.0);
			
			glPushMatrix();
				glScalef(0.5,0.2 ,0.20);
				glutWireCube(1.0);
			glPopMatrix();
		glPopMatrix();
		
		//KELINGKING1
		glPushMatrix();
			glTranslatef(0.5,0.0,-0.4);
			glRotatef((GLfloat) kelingking1, 0.0,0.0,1.0);
			glTranslatef(0.25,0.0,0.0);
			
			glPushMatrix();
				glScalef(0.5,0.2 ,0.20);
				glutWireCube(1.0);
			glPopMatrix();
			
			//KELINGKING2
			glTranslatef(0.25,0.0,0.0);
			glRotatef((GLfloat) kelingking2, 0.0,0.0,1.0);
			glTranslatef(0.25,0.0,0.0);
			
			glPushMatrix();
				glScalef(0.5,0.2 ,0.20);
				glutWireCube(1.0);
			glPopMatrix();
		glPopMatrix();
		
		//JEMPOL
		glPushMatrix();
			glTranslatef(0.2,0.0,0.4);
			glRotatef((GLfloat) jempol, -1.0,0.0,0.0);
			glTranslatef(0.0,0.0,0.25);
			
			glPushMatrix();
				glScalef(0.2,0.2 ,0.50);
				glutWireCube(1.0);
			glPopMatrix();
		glPopMatrix();
	glPopMatrix();
	
	glutSwapBuffers();
}

void reshape(int w, int h) {
	glViewport(0,0,(GLsizei) w, (GLsizei) h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(65.0,(GLfloat) w/ (GLfloat) h, 1.0,20.0);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glTranslatef(0.0,0.0,-5.0);
	
}

void keyboard(unsigned char key, int x, int y) {
	switch(key) {
		case 'a': bahu = (bahu + 5) % 360;
		glutPostRedisplay();
		break;
		case 'A': bahu = (bahu - 5) % 360;
		glutPostRedisplay();
		break;
		case 's': siku = (siku + 5) % 360;
		glutPostRedisplay();
		break;
		case 'S' : siku = (siku - 5) % 360;
		glutPostRedisplay();
		break;
		case 'd': telapak = (telapak + 5) % 360;
		glutPostRedisplay();
		break;
		case 'D': telapak = (telapak - 5) % 360;
		glutPostRedisplay();
		break;
		case 'h': telunjuk1 = (telunjuk1 + 5) % 360;
		glutPostRedisplay();
		break;
		case 'H': telunjuk1 = (telunjuk1 - 5) % 360;
		glutPostRedisplay();
		break;
		case 'y': telunjuk2 = (telunjuk2 + 5) % 360;
		glutPostRedisplay();
		break;
		case 'Y': telunjuk2 = (telunjuk2 - 5) % 360;
		glutPostRedisplay();
		break;
		case 'j': tengah1 = (tengah1 + 5) % 360;
		glutPostRedisplay();
		break;
		case 'J': tengah1 = (tengah1 - 5) % 360;
		glutPostRedisplay();
		break;
		case 'u': tengah2 = (tengah2 + 5) % 360;
		glutPostRedisplay();
		break;
		case 'U': tengah2 = (tengah2 - 5) % 360;
		glutPostRedisplay();
		break;
		case 'k': manis1 = (manis1 + 5) % 360;
		glutPostRedisplay();
		break;
		case 'K': manis1 = (manis1 - 5) % 360;
		glutPostRedisplay();
		break;
		case 'i': manis2 = (manis2 + 5) % 360;
		glutPostRedisplay();
		break;
		case 'I': manis2 = (manis2 - 5) % 360;
		glutPostRedisplay();
		break;
		case 'l': kelingking1 = (kelingking1 + 5) % 360;
		glutPostRedisplay();
		break;
		case 'L': kelingking1 = (kelingking1 - 5) % 360;
		glutPostRedisplay();
		break;
		case 'o': kelingking2 = (kelingking2 + 5) % 360;
		glutPostRedisplay();
		break;
		case 'O': kelingking2 = (kelingking2 - 5) % 360;
		glutPostRedisplay();
		break;
		case 'w': jempol = (jempol + 5) % 360;
		glutPostRedisplay();
		break;
		case 'W': jempol = (jempol - 5) % 360;
		glutPostRedisplay();
		break;
		case 27: exit(0);
		break;
		default: break;
	}
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(1200, 600);
	glutInitWindowPosition(100,100);
	glutCreateWindow(argv[0]);
	init();
	
	glutDisplayFunc(display);
	glutReshapeFunc(reshape);
	glutKeyboardFunc(keyboard);
	
	glutMainLoop();
	return 0;
}
