//ch06-1
//静态数据成员与静态成员函数代码演示
//定义Tank类
 //数据成员：坦克编号m_cCode、坦克数量s_iCount
 //成员函数：构造函数、析构函数、fire()、getCount()

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
