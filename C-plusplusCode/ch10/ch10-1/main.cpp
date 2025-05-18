//ch10-1
/*动态多态与虚函数
要求：
 1. Shape类，成员函数：calcArea()、构造函数、析构函数
 2. Rect类，成员函数：calcArea()、构造函数、析构函数；数据成员：m_dWidth ,m_dHeight
 3. Circle类，成员函数： calcArea()、构造函数、析构函数；数据成员：m_dR
*/

#include "Circle.h"
#include "Rect.h"
#include <iostream>
using namespace std;

int main() {
		
	Shape *shape1 = new Circle(5);
	Shape *shape2 = new Rect(3,6);
	Shape *shape3 = new Shape();
		
	cout<<shape1->calcArea()<<endl;
	cout<<shape2->calcArea()<<endl;
	cout<<shape3->calcArea()<<endl;
	
	delete shape1;
	shape1=NULL;
	delete shape2;
	shape2=NULL;
	delete shape3;
	shape3=NULL;
	
	return 0;
}

