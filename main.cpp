#include "point_t.h"
#include <GL/glut.h>
point_t p;
void display( void )
{
   glClearColor (0.0, 0.0, 0.0, 0.0);
  glClear( GL_COLOR_BUFFER_BIT );
   p.setXcoordinate(.4);
   p.setYcoordinate(.8);
   glColor3f(0.0, 1.0, 0.0);
   glPointSize(4.0);
   p.draw();
   glutSwapBuffers();

}

int main(int argc, char *argv[]) {

   glutInit( &argc, argv );
   glutInitDisplayMode( GLUT_RGBA | GLUT_DOUBLE );
   glutInitWindowSize( 512, 512);

   glutCreateWindow( "point drawn function" );

   
   glutDisplayFunc( display );
  // glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);
   
   
   //glFlush();
   glutMainLoop();
   return 0;
}