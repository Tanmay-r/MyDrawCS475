#ifndef FILL_T_H_
#define FILL_T_H_

#include "point_t.h"
#include "line_t.h"
#include "color_t.h"
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

class fill_t{
	private:
		bool fillType;
		color_t* Color;
		vector<vector< point_t* > > *backGround;
		int XClicked;
		int YClicked;
		void solidFill();
		void chessBoardFill();
		bool getFilltype();
		bool check();
	public:
		fill_t(vector<vector< point_t* > > *backGround ,int X,int Y, color_t & col);
		void setFilltype(bool type);
		void draw();
};
#endif
