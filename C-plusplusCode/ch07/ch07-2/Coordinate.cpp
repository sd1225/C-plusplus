//ch07-2
#include "Coordinate.h"
Coordinate::Coordinate(int x,int y){
	m_iX=x;
	m_iY=y;
}




////ǰ��++���� ��Ա���� 
//Coordinate &Coordinate::operator++()
//{
//	m_iX++;		//	this->m_iX++;
//	m_iY++;		//	this->m_iY++;
//	return *this;
//}

//����++���� ��Ա����
//Coordinate Coordinate::operator++(int)
//{
//	Coordinate old(*this);	//ʹ�õ�Ĭ�Ͽ������캯�� 
//	this->m_iX++;	//m_iX++;
//	this->m_iY++;	//m_iY++;
//	return old;
//}


//	Coordinate& operator++(Coordinate& c)	//ǰ��++����Ԫ
//	{
//		c.m_iX++;
//		c.m_iY++;
//		return c;
//	}
//	 
//	Coordinate operator++(Coordinate& c,int)	//����++����Ԫ 
//	{
//		Coordinate old(c);
//		c.m_iX++;
//		c.m_iY++;
//		return old;
//	}
	

int Coordinate::getX(){
	return m_iX;
}

int Coordinate::getY(){
	return m_iY;
}

