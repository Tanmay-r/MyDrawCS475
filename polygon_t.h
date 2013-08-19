#ifndef POLYGON_T_H_
#define POLYGON_T_H_

#include "point_t.h"
#include "line_t.h"
#include "color_t.h"
#include <iostream>
#include <vector>

using namespace std;

class polygon_t{
	int numberOfVertices;
	vector<point_t* > vertices;
	vector<line_t* > sides;
	bool filled;
	color_t* fillColor;

public:
	polygon_t();
	void addVertex(point_t &p);
	void draw();
	int getNumberOfVertices();
	vector<point_t* > getVertexList();
	vector<line_t* > getSideList();
	bool isFilled();
	color_t* getFillColor();
};


#endif