#ifndef COLOR_T_H_
#define COLOR_T_H_

#include <cmath>
#include <cstdlib>
#include <iostream>
#include <GL/glut.h>

class color_t{


private:
	float Red;
	float Green;
	float Blue;
public: 
	/*Constructors*/
	color_t(int RED, int GREEN, int BLUE);
	color_t();
	/*setters */
	void setRedColor(int RED);
	void setGreenColor(int GREEN);
	void setBlueColor(int BLUE);
	/*getters*/
	float getRedColor();
	float getGreenColor();
	float getBlueColor();

};
#endif