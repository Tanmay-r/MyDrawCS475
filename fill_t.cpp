#include "fill_t.h"


fill_t::fill_t(vector<vector< point_t* > > &ground,int X ,int Y,color_t& col){
	
	backGround=&ground;
	fillType=1;
	Color=&col;
	XClicked=X;
	YClicked=Y;
	
void fill_t::setFillType(bool type){
	fillType=type;
}

void fill_t::draw(){

	if(fillType)
		solidFill();
	else
		chessBoardFill();
}

void fill_t::solidFill(){
	queue<point_t *> pointQueue;
	int X;
	int Y;
	pointQueue.push(backGround[XClicked][YClicked]);
	while(!pointQueue.empty()){
		point_t* p;
		
		p=pointQueue.front();
		color_t* col=&(p->getColor());
		X=p->getXcoordinate();
		Y=p->getYcoordinate();
		for(int i=-1 ;i<2;i++){
			
				point_t* p1;
				if(X>0 && Y>0 && X<511 && Y<511){
				p1=backGround[X-1][Y+i];
				if(check(p,p1)){
					pointQueue.push(p1);
				}
				if(i!=0)
				p1=p1=backGround[X][Y+i];
				if(check(p,p1)){
					pointQueue.push(p1);
				}
				p1=p1=backGround[X+1][Y+i];
				if(check(p,p1)){
					pointQueue.push(p1);
				}
			}

		}
		col->setRedColor(Color->getRedColor());
		col->setGreenColor(Color->getGreenColor());
		col->setBlueColor(Color->getBlueColor());
		p->draw();

	}


}
bool fill_t::check(point_t* p1 ,point_t* p2){
	
	if((p1->getColor()).getRedColor()=(p2->getColor()).getRedColor() && (p1->getColor()).getGreenColor()=(p2->getColor()).getGreenColor() 
			&& (p1->getColor()).getBlueColor()=(p2->getColor()).getBlueColor() )
		return true;
	else
		return false;


}