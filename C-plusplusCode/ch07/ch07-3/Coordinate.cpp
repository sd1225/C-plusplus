//ch07-3
#include "Coordinate.h"
Coordinate::Coordinate(int x,int y){
	m_iX=x;
	m_iY=y;
}

Coordinate operator+(const Coordinate &c1,const Coordinate &c2){
	Coordinate temp;
	temp.m_iX =c1.m_iX + c2.m_iX;
	temp.m_iY =c1.m_iY + c2.m_iY;
	return temp;

}


int Coordinate::getX(){
	return m_iX;
}
int Coordinate::getY(){
	return m_iY;
}





//Coordinate Coordinate::operator+(const Coordinate &c){
//	Coordinate temp;
//	temp.m_iX = this->m_iX + c.m_iX;
//	temp.m_iY = this->m_iY + c.m_iY;
//	return temp;
//}

//Coordinate operator+(const Coordinate &c1,const Coordinate &c2){
//	Coordinate temp;
//	temp.m_iX = c1.m_iX + c2.m_iX;
//	temp.m_iY = c1.m_iY + c2.m_iY;
//	return temp;
//}
