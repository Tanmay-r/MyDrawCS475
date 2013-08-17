#include "line_t.h"
#include <iostream>
#include <cmath>

using namespace std;

line_t::line_t(){
	endpoint1 = new point_t();
	endpoint2 = new point_t();
	linecolor = new color_t();
}

line_t::line_t(point_t &p1, point_t &p2, color_t &c){
	endpoint1 = &p1;
	endpoint2 = &p2; 
	linecolor = &c;
}

void line_t::setEndpoint1(point_t &p){
	endpoint1 = &p;
}

void line_t::setEndpoint2(point_t &p){
	endpoint2 = &p;
}

point_t & line_t::getEndpoint1(){
	return *endpoint1;
}

point_t & line_t::getEndpoint2(){
	return *endpoint2;
}

void line_t::swap (int &x, int &y){
  	int temp = x;
  	x = y; 
  	y = temp;
}

void line_t::draw(){
	int x0, x1, y0, y1;
	x0 = endpoint1.getXcoordinate();
	x1 = endpoint2.getXcoordinate();
	y0 = endpoint1.getYcoordinate();
	y1 = endpoint2.getYcoordinate();

	bool steep = abs(y1 - y0) > abs(x1 - x0);		//Absolute value of slope > 1

	if (steep){										//if absolute value of slope > 1, interchange x and y
      swap(x0, y0);
      swap(x1, y1);
    }
    if (x0 > x1){									//if x0 > x1, interchange the endpoints
      swap(x0, x1);
      swap(y0, y1);
    }
  	int deltaX = x1 - x0;
  	int deltaY = abs(y1 - y0);
  	int error = 0;
  	int y = y0;
  	int ystep;

  	if(y0 < y1){									//Line with poisitive slope
  		ystep = 1;
  	}
  	else{											//Line with negative slope
  		ystep = -1;
  	}

  	for(int x = x0; x < x1; x++){
  		if(steep){
  			point_t * p = new point_t(y, x);  		//if absolute value of slope > 1
  		}
  		else{
  			point_t * p = new point_t(x, y);		//if absolute value of slope < 1
  		}
  		p->draw();
  		error = error + deltaY;
  		if(2*error >= deltaX){						//heart of bresenham's algorithm
  			y = y + ystep;
  			error = error - deltaX;
  		}
  	}
}