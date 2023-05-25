#include <GL/gl.h>
#include <GL/glut.h>
void display(void)
{
/* clear all pixels */
glClear (GL_COLOR_BUFFER_BIT);
/* draw white polygon (rectangle) with corners at
* (0.25, 0.25, 0.0) and (0.75, 0.75, 0.0)
*/
glColor3f (0.294, 0.000, 0.510);
glBegin(GL_POLYGON);
glVertex3f (0.25, 0.25, 0.0);
glVertex3f (0.75, 0.25, 0.0);
glVertex3f (0.75, 0.75, 0.0);
glVertex3f (0.25, 0.75, 0.0);
glEnd();

glColor3f (0.878, 1.000, 1.000);
glBegin(GL_TRIANGLES);
glVertex3f (0.25, 0.75, 0.0);
glVertex3f (0.75, 0.75, 0.0);
glVertex3f (0.50, 1.00, 0.0);

glEnd();

glColor3f (0.529, 0.808, 0.980);
glBegin(GL_POLYGON);
glVertex3f (0.30, 0.45, 0.0);
glVertex3f (0.40, 0.45, 0.0);
glVertex3f (0.40, 0.60, 0.0);
glVertex3f (0.30, 0.60, 0.0);
glEnd();

glColor3f (0.529, 0.808, 0.980);
glBegin(GL_POLYGON);
glVertex3f (0.60, 0.45, 0.0);
glVertex3f (0.70, 0.45, 0.0);
glVertex3f (0.70, 0.60, 0.0);
glVertex3f (0.60, 0.60, 0.0);
glEnd();

glColor3f (0.000, 0.502, 0.502);
glBegin(GL_POLYGON);
glVertex3f (0.45, 0.25, 0.0);
glVertex3f (0.45, 0.65, 0.0);
glVertex3f (0.55, 0.65, 0.0);
glVertex3f (0.55, 0.25, 0.0);
glEnd();
/* don't wait!
* start processing buffered OpenGL routines
*/
glFlush ();
}
void init (void)
{
/* select clearing (background) color */
glClearColor (0.0, 0.0, 0.0, 0.0);
/* initialize viewing values */
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);
}
/*
* Declare initial window size, position, and display mode
* (single buffer and RGBA). Open window with "Home Sweet Home"
* in its title bar. Call initialization routines.
* Register callback function to display graphics.
* Enter main loop and process events.
*/
int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (500, 500);
glutInitWindowPosition (100, 100);
glutCreateWindow ("Home Sweet Home ");
init ();
glutDisplayFunc(display);
glutMainLoop();
return 0; /* ISO C requires main to return int. */
}

