#ifndef POINT_T_H_
#define POINT_T_H_

#include <cmath>
#include <cstdlib>
#include <iostream>
#include <GL/glut.h>

class point_t{


private:
	int X_coordinate;
	int Y_coordinate;
public: 
	/*Constructors*/
	point_t(int X_cordinate,int Y_cordinate);
	point_t();
	void setXcoordinate(int X_cordinate);
	void setYcoordinate(int Y_cordinate);
	int getXcoordinate();
	int getYcoordinate();
	/* Draw a point on X_coordinate and Y_coordinate*/
	void draw(void);

};
#endif