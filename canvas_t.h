#ifndef CANVAS_T_H_
#define CANVAS_T_H_

#include "point_t.h"
#include "line_t.h"
#include "color_t.h"
#include "drawing_t.h"
#include <iostream>
#include <vector>

class canvas{
	private:
		drawing_t* currentDrawing;
		color_t* backGroundColor;
		vector<vector< point_t* > > backGround;
		int Height;
		int Width;
	public:
	canvas_t();
	void setCurrentDrawing(drawing_t & currDrawing);
	drawing_t & getCurrentDrawing();
	void setHeight(int height);
	int getHeight();
	void setWidth(int width);
	int getWidth();		
	void Erase();
	void setBackGroundColor(color_t & color);
	color_t & getBackGroundColor();

};