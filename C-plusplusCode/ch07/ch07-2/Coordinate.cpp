//ch07-2
#include "Coordinate.h"
Coordinate::Coordinate(int x,int y){
	m_iX=x;
	m_iY=y;
}




////前置++重载 成员函数 
//Coordinate &Coordinate::operator++()
//{
//	m_iX++;		//	this->m_iX++;
//	m_iY++;		//	this->m_iY++;
//	return *this;
//}

//后置++重载 成员函数
//Coordinate Coordinate::operator++(int)
//{
//	Coordinate old(*this);	//使用的默认拷贝构造函数 
//	this->m_iX++;	//m_iX++;
//	this->m_iY++;	//m_iY++;
//	return old;
//}


//	Coordinate& operator++(Coordinate& c)	//前置++，友元
//	{
//		c.m_iX++;
//		c.m_iY++;
//		return c;
//	}
//	 
//	Coordinate operator++(Coordinate& c,int)	//后置++，友元 
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

