//ch06-1
//��̬���ݳ�Ա�뾲̬��Ա����������ʾ
//����Tank��
 //���ݳ�Ա��̹�˱��m_cCode��̹������s_iCount
 //��Ա���������캯��������������fire()��getCount()

#include "Tank.h"
#include <iostream>
using namespace std;

int main() {
	cout<<Tank::getCount()<<endl;
	Tank t1('A');
	cout<<t1.getCount()<<endl;
	t1.fire();
	
	Tank *p=new Tank('B');
	cout<<Tank::getCount()<<endl;
	p->fire();
	
	Tank *q=new Tank('C');
	cout<<q->getCount()<<endl;
	q->fire();
	
	delete p;
	delete q;
	cout<<Tank::getCount()<<endl;
	system("pause");
	return 0;
}
