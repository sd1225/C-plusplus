//ch05-4
/*
定义两个类
坐标类：Coordinate
	数据成员：	m_iX和m_iY
 	成员函数：	构造函数、析构函数、数据封装函数 				
线段类：Line
 	数据成员：	点A指针 m_pCoorA
  				点B指针 m_pCoorB
 	成员函数：	构造函数、析构函数
	     		数据封装函数、信息打印函数
*/

#include <iostream>
#include "Line.h"
using namespace std;

int main() {
	Line *p=new Line(1,2,3,4);
	p->printInfo();

	//cout<<sizeof(p)<<endl;		//p指针占4个内存单元 
	//cout<<sizeof(Line)<<endl;	//Line中有两个指针，所以占8个内存单元 
	
	delete p;
	p=NULL;
	return 0;
}

