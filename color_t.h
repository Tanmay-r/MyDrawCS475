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
	color_t(float RED, float GREEN, float BLUE);
	color_t();
	/*setters */
	void setRedColor(float RED);
	void setGreenColor(float GREEN);
	void setBlueColor(float BLUE);
	/*getters*/
	float getRedColor();
	float getGreenColor();
	float getBlueColor();

};
#endif