#ifndef PEN_T_H_
#define PEN_T_H_

#include <cmath>
#include <cstdlib>
#include <iostream>
#include <GL/glut.h>
#include"color_t.h"
#include"point_t.h"

class pen_t{
	private:
		float Thickness;
		color_t Color(0,0,0);
	public:
		void setThickness(float thickness);
		void setColor(float Red, float Green ,float Blue);
		void Erase();

};