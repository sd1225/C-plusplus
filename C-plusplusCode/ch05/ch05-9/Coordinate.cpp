//ch05-9
#include <iostream>
#include "Coordinate.h"
using namespace std;

Coordinate::Coordinate(int x,int y){
	m_iX=x;
	m_iY=y;
	cout<<"Coordinate()"<<m_iX<<","<<m_iY<<endl;}
Coordinate::~Coordinate(){
	cout<<"~Coordinate()"<<m_iX<<","<<m_iY<<endl;}
void Coordinate::setX(int x){	m_iX=x;}

int Coordinate::getX()const 	//����const
{	return m_iX;}
void Coordinate::setY(int y){	m_iY=y;}
int Coordinate::getY() const	//����const
{	return m_iY;}
