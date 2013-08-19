#include "polygon_t.h"
#include "point_t.h"
#include "line_t"
#include "color_t"
#include <iostream>
#include <vector>

using namespace std;

polygon_t::polygon_t(){
	numberOfVertices = 0;
	vertices = new vector<point_t* > ();
	sides = new vector<line_t* > ();
	filled = false;
}

void polygon_t::addVertex(point_t &p){
	vertices.push_back(&p);
	numberOfVertices++;
	if(numberOfVertices%2 == 0){
		line_t* newSide = new line_t(vertices[numberOfVertices-2], vertices[numberOfVertices-1], new color_t ());
		sides.push_back(newSide);
	}
}

int polygon_t::getNumberOfVertices(){
	return numberOfVertices;	
}

vector<point_t* > polygon_t::getVertexList(){
	return vertices;
}

vector<line_t* > polygon_t::getSideList(){
	return sides;
}

bool polygon_t::isFilled(){
	return filled;
}
	
color_t polygon_t::getFillColor(){
	if(filled){
		return fillColor;
	}
	else{
		return NULL;
	}
}

void polygon_t::draw(){
	line_t* lastSide = new line_t(vertices[numberOfVertices-1], vertices[0], new color_t);
	sides.push_back(newSide);
	for(int i = 0; i < numberOfVertices; i++){
		sides[i].draw();
	}
}


