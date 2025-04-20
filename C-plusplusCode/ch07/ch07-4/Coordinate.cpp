//ch07-4
#include "Coordinate.h"
Coordinate::Coordinate(int x,int y){
	m_iX=x;
	m_iY=y;
}

ostream &operator<<(ostream &output,const Coordinate &coor)
{
	output<<coor.m_iX<<","<<coor.m_iY;
	return output;
}

Coordinate Coordinate::operator+(const Coordinate &c)
{
	Coordinate temp(0,0);
    temp.m_iX = this->m_iX+c.m_iX;
    temp.m_iY = this->m_iY+c.m_iY;
    return temp;

}

Coordinate &Coordinate::operator++()
{
	m_iX++;	//++m_iX;
	m_iY++;	//++m_iY;
	return *this;
}
Coordinate Coordinate::operator++(int)
{
	Coordinate old(*this);	//使用的默认拷贝构造函数 
	this->m_iX++;	//m_iX++;
	this->m_iY++;	//m_iY++;
	return old;
}

//Coordinate operator+(const Coordinate &c1,const Coordinate &c2)
//{
//	Coordinate temp(0,0);
//    temp.m_iX = c1.m_iX+c2.m_iX;
//    temp.m_iY = c1.m_iY+c2.m_iY;
//    return temp;
//}


Coordinate &operator-(Coordinate &c)	//友元 
{
	c.m_iX=-c.m_iX;	
	c.m_iY=-c.m_iY;	
	return c;
}
int Coordinate::getX(){
	return m_iX;
}
int Coordinate::getY(){
	return m_iY;
}

