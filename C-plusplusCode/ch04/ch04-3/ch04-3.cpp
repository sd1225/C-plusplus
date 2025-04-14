
#include <iostream>
#include<string>
#include "Teacher.h"
using namespace std;

/**********************************************************/
/*
定义Teacher类：
*   自定义拷贝构造函数
 数据：
	 名字   
	 年龄
 成员函数：
	数据成员的封装函数
*/
/***********************************************************/


Teacher test(Teacher t)
{
	cout << "test" << endl;
	return t;
}


int main()
{

	Teacher t1;
	Teacher t2;
	t2 = test(t1);
	

	system("pause");
	return 0;
}