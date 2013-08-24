#include "canvas_t.h"

canvas_t::canvas_t(){
	Height=512;
	Width=512;
	backGroundColor=new color_t();
	backGroundColor->setRedColor(0.0);
	backGroundColor->setGreenColor(0.0);
	backGroundColor->setBlueColor(0.0);
	backGround.resize(Height);
	for(int i=0;i<Height;i++)
		for(int j=0;j<Width;j++){
			point_t * point;
			point=new point_t(i,j,*backGroundColor,this);
			backGround.push_back(point);
			//point->setXcoordinate(i+1);
			//point->setYcoordinate(j+1);
			//point->setColor(*backGroundColor);
		}
	}

}

void canvas_t::setCurrentDrawing(drawing_t & currDrawing){
	currentDrawing=&currDrawing;
}

drawing_t & canvas_t::getCurrentDrawing(){
	return *currentDrawing;
}

void canvas_t::setHeight(int height){
	Height=height;
}

int canvas_t::getHeight(){
	return Height;
}

void canvas_t::setWidth(int width){
	Width=width;
}

int canvas_t::getWidth(){
	return Width;
}

void canvas_t::setBackGroundColor(color_t & color){
	backGroundColor=*color;
}

color_t & canvas_t::getBackGroundColor(){
	return *backGroundColor;
}

void Erase(){

}