/****************************************
 ***    Project:  GL Raytracer        ***
 ***    File:     main.cpp            ***
 ***    Author:   Daniele Donghi      ***
 ***           d.donghi AT gmail.com  ***
 ***    Created on November 1, 2011   ***
 ****************************************/

#include "glraytracer.h"

#define WIDTH  800
#define HEIGHT 600

using namespace std;
	
glraytracer *glProject = NULL;

void init()												{glProject->init();}
void display()											{glProject->display();}
void keyboard(unsigned char key, int x, int y)			{glProject->keyboard(key, x, y);}
void specialKey(int key, int x, int y)					{glProject->specialKey(key, x, y);}
void mouseButton(int button, int state, int x, int y)	{glProject->mouseButton(button, state, x, y);}
void idleFunc()											{glProject->idleFunc();}

int main(int argc, char** argv) {
	/* check command line arguments for database file name */
        if(argc != 2) { cout << "Error, no input file name.\n" << endl; return 0; }
	
	/* create project and read input file */
        glProject = new glraytracer(WIDTH, HEIGHT);
	glProject->readDatabase(argv[1]);
	
	/* deal with any GLUT command Line options */
	glutInit(&argc, argv);
		
	/* create an output window */
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA);
	
	// set up the physical window size
	glutInitWindowSize(WIDTH, HEIGHT);
	// set the name of the window and try to create it
        glutCreateWindow("GL Raytracer");
	
	/* set up the logical graphics space */
	init();

	/* Receive keyboard inputs */
	glutKeyboardFunc(keyboard);
	/* Receive keyboard inputs */
	glutSpecialFunc(specialKey);
	/* Receive mouse button input*/
	glutMouseFunc(mouseButton);
	/* assign the display function */
	glutDisplayFunc(display);
	/* assign the idle function */
	glutIdleFunc(idleFunc);

	glutMainLoop();
	return (0);
}

