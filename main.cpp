#include<windows.h>
#include <GL/glut.h>
#include <math.h>

void init(void)
{
	glClearColor(1.0, 1.0, 1.0, 0.1);	// Set display window colour to white

	glMatrixMode(GL_PROJECTION);		// Set projection parameters
	gluOrtho2D(0.0, 800.0, 0.0, 800.0);
}

void display()
{
    float theta;
    int i;
	glClear(GL_COLOR_BUFFER_BIT);	// Clear display window
    //Set colour to red
	glColor3f(0.0, 0.0, 1.0);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;
	  glVertex2f(150+100*cos(theta),400+100*sin(theta));  // here (250,250) is the center and 150 is the radius
	}
	glEnd();

    float theta2;
    int j;
    //Set colour to red
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_POLYGON);
	for(j=0;j<360;j++)
	{
	  theta2=j*3.142/180;
	  glVertex2f(150+90*cos(theta2),400+90*sin(theta2));  // here (250,250) is the center and 150 is the radius
	}
	glEnd();


	///
	///
    float theta7;
    int o;
    //Set colour to red
	glColor3f(1.0, 1.0, 0.0);
	glBegin(GL_POLYGON);
	for(o=0;o<360;o++)
	{
	  theta7=o*3.142/180;
	  glVertex2f(265+100*cos(theta7),320+100*sin(theta7));  // here (250,250) is the center and 150 is the radius
	}
	glEnd();


    float theta8;
    int p;
    //Set colour to red
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_POLYGON);
	for(p=0;p<360;p++)
	{
	  theta8=p*3.142/180;
	  glVertex2f(265+90*cos(theta8),320+90*sin(theta8));  // here (250,250) is the center and 150 is the radius
	}
	glEnd();
    ///
	///
    float theta3;
    int k;
    //Set colour to red
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_POLYGON);
	for(k=0;k<360;k++)
	{
	  theta3=k*3.142/180;
	  glVertex2f(380+100*cos(theta3),400+100*sin(theta3));  // here (250,250) is the center and 150 is the radius
	}
	glEnd();

    float theta4;
    int l;
    //Set colour to red
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_POLYGON);
	for(l=0;l<360;l++)
	{
	  theta4=l*3.142/180;
	  glVertex2f(380+90*cos(theta4),400+90*sin(theta4));  // here (250,250) is the center and 150 is the radius
	}
	glEnd();



	///
	///
    float theta9;
    int q;
    //Set colour to red
	glColor3f(0.0, 0.5, 0.0);
	glBegin(GL_POLYGON);
	for(q=0;q<360;q++)
	{
	  theta9=q*3.142/180;
	  glVertex2f(495+100*cos(theta9),320+100*sin(theta9));  // here (250,250) is the center and 150 is the radius
	}
	glEnd();


    float theta10;
    int r;
    //Set colour to red
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_POLYGON);
	for(r=0;r<360;r++)
	{
	  theta10=r*3.142/180;
	  glVertex2f(495+90*cos(theta10),320+90*sin(theta10));  // here (250,250) is the center and 150 is the radius
	}
	glEnd();
    ///
	///

    float theta5;
    int m;
    //Set colour to red
	glColor3f(1.0, 0.4, 0.2);
	glBegin(GL_POLYGON);
	for(m=0;m<360;m++)
	{
	  theta5=m*3.142/180;
	  glVertex2f(610+100*cos(theta5),400+100*sin(theta5));  // here (250,250) is the center and 150 is the radius
	}
	glEnd();


    float theta6;
    int n;
    //Set colour to red
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_POLYGON);
	for(n=0;n<360;n++)
	{
	  theta6=n*3.142/180;
	  glVertex2f(610+90*cos(theta6),400+90*sin(theta6));  // here (250,250) is the center and 150 is the radius
	}
	glEnd();



	///
	///







glFlush();
}





int main(int argc, char* argv[])
{
	glutInit(&argc, argv);						// Initalise GLUT
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);	// Set display mode

	glutInitWindowPosition(100, 100);				// Set window position
	glutInitWindowSize(350, 350);					// Set window size
	glutCreateWindow("An Example OpenGL Program");	// Create display window

	init();							// Execute initialisation procedure
	glutDisplayFunc(display);		// Send graphics to display window
	glutMainLoop();					// Display everything and wait

	return 0;
}


