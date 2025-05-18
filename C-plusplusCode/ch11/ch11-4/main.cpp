//ch11-4 

//异常处理：
//	1.定义Exception类，成员函数：printException，析构函数
//	2.定义IndexException类，成员函数： printException

#include<iostream>
#include"IndexException.h"
using namespace std;

void test()
{
	throw IndexException();
} 

int main()
{
	try{
		test();
	}
	catch(Exception &e)
	{
		e.printException();
	}

}
