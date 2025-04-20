//ch07-1
//Coordinate.cpp
#include "Coordinate.h"
Coordinate::Coordinate(int x,int y){
	m_iX=x;
	m_iY=y;
}
Coordinate& Coordinate::operator-() //³ÉÔ±º¯Êı 
{
	m_iX = -m_iX;	//this->m_iX=-this->m_iX;
	m_iY = -m_iY;	//this->m_iY=-(this->m_iY);
	return *this;
}

int Coordinate::getX(){
	return m_iX;
}
int Coordinate::getY(){
	return m_iY;
}

