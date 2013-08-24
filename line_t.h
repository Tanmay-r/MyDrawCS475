#ifndef LINE_T_H_
#define LINE_T_H_

#include <iostream>
#include"point_t.h"

using namespace std;

class line_t{
	point_t * endpoint1;
	point_t * endpoint2;
	color_t * linecolor;
	void swap(int &x, int &y);			//private function to swap two integer variables. (used in bresenham's implementation)

public:
	line_t();							//constructor
	line_t(point_t &p1, point_t &p2);	//constructor
	void setEndpoint1(point_t &p);
	void setEndpoint2(point_t &p);
	point_t & getEndpoint1();
	point_t & getEndpoint2();

	void draw();
};
#endif 