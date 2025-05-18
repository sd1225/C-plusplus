//ch10-1
#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h"
class Circle:public Shape
{
	public:
		Circle(double r);
		~Circle();
		virtual double calcArea();
	protected:
		double m_dR;
};
#endif
