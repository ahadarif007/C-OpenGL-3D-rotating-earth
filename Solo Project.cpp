#include <GL\glut.h>
#include<math.h>
GLfloat XR, YR, ZR;
void drawCircle()
{
    glPushMatrix();
	glTranslatef(.50, 0.0, 0.0);
	glColor3f(0.5,0.5,3);
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/50 ;
		float r=.8;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();

    //2nd
     glPushMatrix();
	glTranslatef(.80, .0, .0);
	glColor3f(0.5,0.5,3);
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/50 ;
		float r=1;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();

    //3rd
     glPushMatrix();
	glTranslatef(1.3, .0, .0);
	glColor3f(0.5,0.5,3);
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/50 ;
		float r=1.3;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();
}

void drawCircle_2()
{
    glPushMatrix();
	glTranslatef(-0.50, 0.0, 0.0);//Rotate about the the vector (1, 2, 3)
	glColor3f(0.5,0.5,3);
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/50 ;
		float r=.8;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();

    //2nd
     glPushMatrix();
	glTranslatef(-.80, .0, .0);//Rotate about the the vector (1, 2, 3)
	glColor3f(0.5,0.5,3);
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/50 ;
		float r=1;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();

    //3rd
     glPushMatrix();
	glTranslatef(-1.3, .0, .0);//Rotate about the the vector (1, 2, 3)
	glColor3f(0.5,0.5,3);
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/50 ;
		float r=1.3;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();
}


void drawCircle_3()
{
    glPushMatrix();
	glTranslatef(.0, 0.0, 0.50);
	glColor3f(0.5,0.5,3);
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/50 ;
		float r=.8;
		float y = r * cos(A);
		float z = r * sin(A);
		glVertex3f(0,y,z );
	}
	glEnd();
    glPopMatrix();

    //2nd
     glPushMatrix();
	glTranslatef(.0, .0, .80);
	glColor3f(0.5,0.5,3);
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/50 ;
		float r=1;
		float y = r * cos(A);
		float z = r * sin(A);
		glVertex3f(0,y,z );
	}
	glEnd();
    glPopMatrix();

    //3rd
     glPushMatrix();
	glTranslatef(.0, .0, 1.30);
	glColor3f(0.5,0.5,3);
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/50 ;
		float r=1.3;
		float y = r * cos(A);
		float z = r * sin(A);
		glVertex3f(0,y,z );
	}
	glEnd();
    glPopMatrix();
}

void drawCircle_4()
{
    glPushMatrix();
	glTranslatef(.0, 0.0, -0.50);
	glColor3f(0.5,0.5,3);
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/50 ;
		float r=.8;
		float y = r * cos(A);
		float z = r * sin(A);
		glVertex3f(0,y,z );
	}
	glEnd();
    glPopMatrix();

    //2nd
     glPushMatrix();
	glTranslatef(.0, .0, -.80);
	glColor3f(0.5,0.5,3);
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/50 ;
		float r=1;
		float y = r * cos(A);
		float z = r * sin(A);
		glVertex3f(0,y,z );
	}
	glEnd();
    glPopMatrix();

    //3rd
     glPushMatrix();
	glTranslatef(.0, .0, -1.30);
	glColor3f(0.5,0.5,3);
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/50 ;
		float r=1.3;
		float y = r * cos(A);
		float z = r * sin(A);
		glVertex3f(0,y,z );
	}
	glEnd();
    glPopMatrix();
}

void redisplayFunction(void)
{

    glMatrixMode(GL_MODELVIEW);
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
    glTranslatef(0.0,0.0,-4.5);
    glColor3f(1, 1, 1);
    glRotatef(XR,1.0,0.0,0.0);
    glRotatef(YR,0.0,1.0,0.0);
    glRotatef(ZR,0.0,0.0,1.0);
    glScalef(1.0,1.0,1.0);
    glutSolidSphere(1,50,50);
    //=============================================================================================
    // Magnetic field done by simple circle
    //each have 3 blue circle as magnetic field
        drawCircle();
        drawCircle_2();
        drawCircle_3();
        drawCircle_4();
    //===============================================================================================
    glFlush();
}


void reshapeFunction(int x, int y)
{
    if (y == 0 || x == 0) return;
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(40.0,(GLdouble)x/(GLdouble)y,0.5,20.0);
    glMatrixMode(GL_MODELVIEW);
    glViewport(0,0,x,y);

}

void idleFunction(void)
{
     YR += 0.08;
    redisplayFunction();
}


int main (int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(800,700);
    glutCreateWindow("Pulsar");
    glPolygonMode(GL_FRONT_AND_BACK,GL_LINE);
    XR = 0.0;
    YR =300;
    ZR = 20.0;
    glClearColor(0.0,0.0,0.0,0.0);
    glutDisplayFunc(redisplayFunction);
    glutReshapeFunc(reshapeFunction);
    glutIdleFunc(idleFunction);
    glutMainLoop();
    return 0;
}
