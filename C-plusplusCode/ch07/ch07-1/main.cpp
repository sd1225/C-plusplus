//ch07-1
//һԪ��������ش�����ʾ

//����Coordinate������
// ���ݳ�Ա��m_iX��m_iY
// ��Ա���������캯��	getX()	getY()
// ������������أ���Ա��������Ԫ������

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

