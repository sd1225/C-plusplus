//ch05-4
/*
����������
�����ࣺCoordinate
	���ݳ�Ա��	m_iX��m_iY
 	��Ա������	���캯�����������������ݷ�װ���� 				
�߶��ࣺLine
 	���ݳ�Ա��	��Aָ�� m_pCoorA
  				��Bָ�� m_pCoorB
 	��Ա������	���캯������������
	     		���ݷ�װ��������Ϣ��ӡ����
*/

#include <iostream>
#include "Line.h"
using namespace std;

int main() {
	Line *p=new Line(1,2,3,4);
	p->printInfo();

	//cout<<sizeof(p)<<endl;		//pָ��ռ4���ڴ浥Ԫ 
	//cout<<sizeof(Line)<<endl;	//Line��������ָ�룬����ռ8���ڴ浥Ԫ 
	
	delete p;
	p=NULL;
	return 0;
}

