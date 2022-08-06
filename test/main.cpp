#include<cstdio>
#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include<math.h>
# define PI           3.14159265358979323846

GLfloat position = 0.0f;
//GLfloat speed = 0.009f;


void boat1(){

    glPushMatrix();
    glTranslatef(position,0.0f, 0.0f);

    glBegin(GL_QUADS);
	glColor3ub(184,134,11);

	glVertex2f(0.2f, -0.1f);
	glVertex2f(0.0f, -0.1f);
	glVertex2f(-0.05f, 0.0f);
	glVertex2f(0.25f, 0.0f);
	glEnd();

    glBegin(GL_LINES);
	glColor3ub(139, 69 ,19);
	glVertex2f(0.1f, 0.0f);
	glVertex2f(0.1f, 0.2f);

	glEnd();

    glBegin(GL_LINES);
	glColor3ub(139 ,69 ,19);
	glVertex2f(0.0f, 0.0f);
	glVertex2f(0.1f, 0.2f);

	glEnd();

    glBegin(GL_TRIANGLES);
	glColor3ub(205,92,92);

	glVertex2f(0.1f,  0.2f);
	glVertex2f(0.2f, 0.04f);
	glVertex2f(0.1f, 0.04f);

	glEnd();
glPopMatrix();



   glFlush();

}

GLfloat position1 = 0.0f;
//GLfloat speed = 0.1f;



void boat2(){
    glPushMatrix();
    glTranslatef(position1,0.0f, 0.0f);

    glBegin(GL_QUADS);
	glColor3ub(178, 34, 34);

	glVertex2f(0.15f, 0.15f);
	glVertex2f(0.45f, 0.15f);
	glVertex2f(0.4f, 0.05f);
	glVertex2f(0.2f, 0.05f);

	glEnd();

    glBegin(GL_LINES);
	glColor3ub(139, 69 ,19);
	glVertex2f(0.3f, 0.15f);
	glVertex2f(0.3f, 0.35f);

	glEnd();

    glBegin(GL_LINES);
	glColor3ub(139 ,69 ,19);
	glVertex2f(0.3f, 0.35f);
	glVertex2f(0.15f, 0.15f);

	glEnd();

    glBegin(GL_TRIANGLES);
	glColor3ub(205,92,92);

	glVertex2f(0.3f, 0.35f);
	glVertex2f(0.45f, 0.2f);
	glVertex2f(0.3f, 0.2f);

	glEnd();

	glPopMatrix();



   glFlush();

}



//---------calling function-----------

void day() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)

    //fornt();



    //sun
    glColor3ub(245, 176, 65);
	int j;
	GLfloat x=-0.8f; GLfloat y=0.9f; GLfloat radius =.1f;
	int triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(j = 0; j <= triangleAmount+1;j++) {
			glVertex2f(
		            x + (radius * cos(j *  twicePi / triangleAmount)),
			    y + (radius * sin(j * twicePi / triangleAmount))
			);
			glColor3ub(245, 249, 10);
		}
	glEnd();


    boat1();
    boat2();


	glFlush();  // Render now
}







/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitWindowSize(900,600); // Set the window's initial width & height
	glutInitWindowPosition(50, 50);

glutCreateWindow("Day:d , Evening:e ,Night:n ,RainyDay:r ,Start:s ,Stop:a");
	glutDisplayFunc(day);





	glutMainLoop();
	return 0;

}
