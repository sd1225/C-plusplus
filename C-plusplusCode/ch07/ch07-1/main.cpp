//ch07-1
//一元运算符重载代码演示

//定义Coordinate坐标类
// 数据成员：m_iX和m_iY
// 成员函数：构造函数	getX()	getY()
// 负号运算符重载（成员函数、友元函数）

#include <iostream>
#include "Coordinate.h"
using namespace std;

int main() {
	Coordinate coor1(1,3);
	cout<<coor1.getX()<<","<<coor1.getY()<<endl;
	-coor1;			
	cout<<coor1.getX()<<","<<coor1.getY()<<endl;	
	return 0;
}

