#include <cmath>
#include <cstdlib>
#include <iostream>
#include <GL/glut.h>

class point_t{


private:
	int X_cordinate;
	int Y_cordinate;
public:
	void setXcordinate(int X_cordinate);
	void setYcordinate(int Y_cordinate);
	int getXcordinate();
	int getYcordinate();
	void drawPoint();

}