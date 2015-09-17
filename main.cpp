
#include <stdio.h>
#include <stdlib.h>


#ifdef __APPLE__
#  include <OpenGL/gl.h>
#  include <OpenGL/glu.h>
#  include <GLUT/glut.h>
#else
#  include <GL/gl.h>
#  include <GL/glu.h>
#  include <GL/freeglut.h>
#endif

#include "Point2D.h"
#include "Vector2D.h"

//Globals
float camPos[] = {0, 0, 3.42f};	//where the camera is

//OpenGL functions
void keyboard(unsigned char key, int xIn, int yIn)
{
	switch (key)
	{
	case 'q':
	case 27:	//27 is the esc key
		exit(0);
		break;
	}
}

void init(void)
{
	glClearColor(0, 0, 0, 0);
	glColor3f(1, 1, 1);

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(45, 1, 1, 100);
}

/* display function - GLUT display callback function
 *		clears the screen, sets the camera position, draws the ground plane and movable box
 */
void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT);



	//flush out to single buffer
	glFlush();
}

/* main function - program entry point */
int main(int argc, char** argv)
{
	glutInit(&argc, argv);		//starts up GLUT
	glutInitDisplayMode(GLUT_RGBA);

	glutInitWindowSize(600, 600);
	glutInitWindowPosition(50, 50);

	glutCreateWindow("3GC3 Boilerplate");	//creates the window

	glutDisplayFunc(display);	//registers "display" as the display callback function
	glutKeyboardFunc(keyboard);

	init();
	// Create the "Point"er
	Point2D *p;
	// define the point
	p = new Point2D(0.0f, 1.0f);

	// Create the "Point"er
	Point2D *p2;
	// define the point
	p2 = new Point2D(0.0f, 2.0f);

	printf("---------------\n");
	// print the point
	p->print();
	printf("%f\n", p->distanceTo(p2));

	// test create
	Vector2D *v;
	v = new Vector2D(0.3f, 0.1f);

	// test normalize
	Vector2D *v2 = v->normalize();
	v2->print();

	// test point create
	Vector2D *v3;
	v3 = new Vector2D(p, p2);
	v3->print();

	Vector2D *mult = v3->multiply(3.0f);
	mult->print();


	glutMainLoop();				//starts the event glutMainLoop
	return (0);					//return may not be necessary on all compilers
}
