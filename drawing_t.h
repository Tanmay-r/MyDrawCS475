#ifndef DRAWING_T_H_
#define DRAWING_T_H_

#include <cmath>
#include <cstdlib>
#include <iostream>
#include <GL/glut.h>
#include <vector>
#include <string>
#include <fstream>
#include "point_t.h"
#include "line_t.h"
#include "polygon_t.h"
#include "canvas_t.h"

class drawing_t{
private:
	vector <point_t* >	points;
	vector <line_t* >	lines;
	vector <polygon_t* > polygons;
	pen_t* drawing_pen;
	canvas_t* canvas;
public:
	void setCanvas(canvas_t & can);
	canvas_t & getCanvas();
	void addPoint(point_t &p);
	void addLine(line_t &l);
	void addPolygon(polygon_t &poly);
	void draw();
	void save();


};
