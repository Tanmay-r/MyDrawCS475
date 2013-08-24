#ifndef POINT_T_H_
#define POINT_T_H_

#include <cmath>
#include <cstdlib>
#include <iostream>
#include <GL/glut.h>
#include "color_t.h"
#include "canvas_t.h"

class point_t{


private:
	int X_coordinate;
	int Y_coordinate;
	color_t* color;
	canvas_t* canvas;

public: 
	/*Constructors*/
	point_t(int X_cordinate,int Y_cordinate,color_t & col ,canvas_t* can);
	point_t();
	void setXcoordinate(int X_cordinate);
	void setYcoordinate(int Y_cordinate);
	int getXcoordinate();
	int getYcoordinate();
	void setColor(color_t & col);
	color_t & getColor();
	/* Draw a point on X_coordinate and Y_coordinate*/
	void draw(void);

};
#endif