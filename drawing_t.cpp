#include "drawing_t.h"



void drawing_t::setCanvas(canvas_t & can){
	canvas=*can;
}
canvas_t & drawing_t::getCanvas(){
	return *canvas;
}
void drawing_t::addPoint(point_t &p){
	points.push_back(&p);
}

void drawing_t::addLine(line_t &l){
	lines.push_back(&l);
}
void drawing_t::addPolygon(polygon_t &poly){
	polygons.push_back(&poly);
}
void drawing_t::draw(){
	int i=0;
	for(i=0,i<points.size(),i++){
		points[i]->draw();
	}
	for(i=0,i<lines.size(),i++){
		lines[i]->draw();
	}
	for(i=0,i<polygons.size(),i++){
		polygons[i]->draw();
	}
}
void drawing_t::save(){
	ofstream data;
	data.open ("drawingData.txt");
	int i=0;
	string str;
	for(i=0;i<points.size(),i++){
		str=to_string(points[i]->getXcoordinate())+":"+to_string(points[i]->getYcoordinate())+":"+"COLOR\n";
		data<<str;
	}
	for(i=0;i<lines.size();i++){
		str=to_string((lines[i]->getEndpoint1).getXcoordinate())+":"+to_string((lines[i]->getEndpoint1).getYcoordinate())+":";
		str+=to_string((lines[i]->getEndpoint2).getXcoordinate())+":"+to_string((lines[i]->getEndpoint2).getYcoordinate())+":"+"COLOR\n";
		data<<str;
	}
	int NoVertices=0
	vector<point_t* > vertices;
	for(i=0;i<polygons.size();i++){
		NoVertices=polygons[i]->getNumberOfVertices();
		str=to_string(NoVertices)+":";
		vertices=polygons[i].getVertexList();
		for(int j=0;j<vertices.size();j++){
			str+=to_string(vertices[j]->getXcoordinate())+":"+to_string(vertices[j]->getYcoordinate())+":";
		}
		str+="COLOR\n";
		data<<str;
	}

}