#include <cmath>
#include <cstdlib>
#include <iostream>
#include <GL/glut.h>
#include"point_t.h"
#include"line_t.h"
#include"polygon_t.h"
int win_width = 512;
int win_height = 512;
int xx0, yy0;
int xx1, yy1;
int numpoints=0;
int linetype = 0;
int drawflags=0;
bool pointFlag = false;
polygon_t * poly=new polygon_t();

void display( void )
{
   //glClear( GL_COLOR_BUFFER_BIT ); 

  
  if(drawflags==0 && numpoints!=0 && pointFlag){
   //
    //glClear( GL_COLOR_BUFFER_BIT );
    point_t * p1;
    p1=new point_t();
    cout<<"x :"<<xx0<<"y :"<<yy0<<endl;
    cout << numpoints << endl;
    p1->setXcoordinate(xx0);
    p1->setYcoordinate(yy0);
    poly->addVertex(*p1);
    pointFlag = false;

    p1->draw();

    if(numpoints == 5){
      drawflags = 1;
    }
  }
  if(drawflags==1){
    

    poly->draw();
    numpoints=0;
    drawflags=0;
    cout<<"tanmay chu h"<<endl;
    /*line_t *l1;
    point_t * p1;
    p1=new point_t();
    p1->setXcoordinate(xx0);
    p1->setYcoordinate(yy0);
    point_t * p2;
    p2=new point_t();
    p2->setXcoordinate(xx1);
    p2->setYcoordinate(yy1);
    l1=new line_t(*p1,*p2);
    l1->draw();*/

  }
  
 
  glutSwapBuffers();
}

void mouse(int button, int state, int x, int y) 
{
  if (state == GLUT_DOWN){
    if (button == GLUT_LEFT_BUTTON){
      if (numpoints <5){
         //numpoints = 0;
         xx0 = x;
         yy0 = win_height - y;
         numpoints++;
         cout << x << "," << y << "," << numpoints << endl;
         pointFlag = true;
      }
      else 
        drawflags=1;

    // else if ((numpoints % 2) == 1)
       //{
         //xx1 = x;
         //yy1 =  win_height - y;
         //numpoints++;
       //}
    }
  }
  glutPostRedisplay();
}

void reshape( int w, int h )
{
  if  ( h == 0 ) h = 1;

  glMatrixMode( GL_PROJECTION );
  glLoadIdentity();

  glOrtho( 0.0, (GLdouble)w, 0.0, (GLdouble)h, -1., 1. );
  glViewport( 0, 0, w, h );

  win_width = w;
  win_height = h;

  glutPostRedisplay();
}

int main (int argc, char *argv[]) 
{

  glutInit( &argc, argv );
  glutInitDisplayMode( GLUT_RGBA | GLUT_DOUBLE );
  glutInitWindowSize( win_width, win_height );

  glutCreateWindow( "Bresenham's Line Drawing Algorithm" );

  glutDisplayFunc( display );
  glutMouseFunc( mouse );
  glutReshapeFunc( reshape );
  glutMainLoop();
}