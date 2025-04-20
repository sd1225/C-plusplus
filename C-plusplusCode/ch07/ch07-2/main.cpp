//ch07-2
//定义Coordinate坐标类
// 数据成员：m_iX和m_iY
// 成员函数：构造函数、getX()和getY()
// 负号运算符重载（成员函数、友元函数）
// ++运算符重载（前置++，后置++）

#include <iostream>
#include "Coordinate.h"
using namespace std;

int main() {
	Coordinate coor1(1,3);
	cout<<coor1.getX()<<","<<coor1.getY()<<endl;
		
	cout<<(coor1++).getX()<<",";
	cout<<(coor1++).getY()<<endl;

	cout<<(++coor1).getX()<<",";
	cout<<(++coor1).getY()<<endl;
		
	cout<<coor1.getX()<<","<<coor1.getY()<<endl;
	return 0;
}


