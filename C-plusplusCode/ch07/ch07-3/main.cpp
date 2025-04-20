//ch07-3
#include <iostream>
#include "Coordinate.h"
using namespace std;

int main() {
	Coordinate coor1(1,3);
	Coordinate coor2(2,4);
	Coordinate coor3;
	coor3 = coor1 + coor2;
	//coor1.operator+(coor2);
	//operator+(coor1,coor2);
	cout<<coor3.getX()<<","<<coor3.getY()<<endl;
	return 0;
}


	//coor1.operator+(coor2);
	//operator+(coor1,coor2);

