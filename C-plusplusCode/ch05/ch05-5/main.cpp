//ch05-5
/*
定义一个Array类
 数据成员：len表示数组长度
 成员函数：构造函数、析构函数
		len的封装函数
		信息输出函数printInfo
*/ 

#include <iostream>
#include "Array.h"
using namespace std;

int main() {
	Array arr1(10);
	arr1.printInfo();
	cout<<arr1.getLen()<<endl;
		
	return 0;
}
