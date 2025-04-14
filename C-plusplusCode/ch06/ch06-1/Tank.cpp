//ch06-1
#include <iostream>
#include "Tank.h"
using namespace std;
int Tank::s_iCount = 0;

Tank::Tank(char code){
	m_cCode=code;
	s_iCount++;
	cout<<"Tank Constructed..."<<endl;
}
Tank::~Tank(){
	s_iCount--;
	cout<<"Tank Disconstructed..."<<endl;
}
void Tank::fire(){
	getCount();
	cout<<m_cCode<<" Tank--fire"<<endl;
}
int Tank::getCount(){	
	//m_cCode = 'c';
	//fire();
	return s_iCount;
 } 
