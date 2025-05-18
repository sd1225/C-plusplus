//ch10-1
#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>
using namespace std;
class Shape
{
	public:
		Shape();
		~Shape();
		virtual double calcArea();
};
#endif
