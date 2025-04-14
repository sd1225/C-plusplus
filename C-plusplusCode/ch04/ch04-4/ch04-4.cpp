
#include <iostream>
#include<string>
#include "Teacher.h"
using namespace std;

/**********************************************************/
/*
定义Teacher类：
   1. 自定义析构函数
   2. 普通方式实例化的对象，在销毁对象时是否自动调用析构函数
   3. 通过拷贝构造函数实例化对象，在销毁对象时是否自动调用析构函数

 数据：
	 名字   
	 年龄
 成员函数：
	数据成员的封装函数
*/
/***********************************************************/



int main()
{

	Teacher t1;
	Teacher t2("Liu",33);
	Teacher t3(t2);
	Teacher *p = new Teacher("Zhao",22);
	delete p;

	return 0;
}
