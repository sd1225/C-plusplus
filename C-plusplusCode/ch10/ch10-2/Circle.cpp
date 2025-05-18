//item10-2
#include "Circle.h"

Circle::Circle(double r, int x, int y):m_dR(r)
{
	cout<<"Circle()"<<endl;	
	m_pCenter=new Coordinate(x,y);
	

}
Circle::~Circle()
{
	cout<<"~Circle()"<<endl;
	delete m_pCenter;
	m_pCenter=NULL;
}
double Circle::calcArea()
{
		cout<<"Circle->calcArea()"<<endl;
		return 3.14*m_dR*m_dR;
}
