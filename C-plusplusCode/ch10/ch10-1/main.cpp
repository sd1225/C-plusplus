//ch10-1
/*��̬��̬���麯��
Ҫ��
 1. Shape�࣬��Ա������calcArea()�����캯������������
 2. Rect�࣬��Ա������calcArea()�����캯�����������������ݳ�Ա��m_dWidth ,m_dHeight
 3. Circle�࣬��Ա������ calcArea()�����캯�����������������ݳ�Ա��m_dR
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

