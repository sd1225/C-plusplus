//item5-4
/*
1、定义一个Array类，数据成员为m_iCount,
成员函数包括数据封装函数、构造函数、拷贝构造函数和析构函数，
通过此示例体会浅拷贝原理。

2、增加数据成员m_pArr，并增加m_pArr地址查看函数，
同时改造构造函数、拷贝构造函数和析构函数，
体会深拷贝的原理和必要性。
*/
#include <iostream>
#include "Array.h"
using namespace std;

int main() {
	Array arr1(5);
	Array arr2(arr1);
	
	arr1.printAddr();
	arr1.printAdd();

	arr2.printAddr();
	arr2.printAdd();

	return 0;
}

