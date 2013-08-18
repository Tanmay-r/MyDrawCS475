#include"pen_t.h"

void pen_t::setThickness(float thickness){
	Thickness=Thickness;
	glPointSize(Thickness);
}
void pen_t::setColor(float Red, float Green, float Blue){
	Color.setRedColor(Red);
	Color.setGreenColor(Green);
	Color.setBlueColor(Blue);
}
void pen_t::Erase(){}
