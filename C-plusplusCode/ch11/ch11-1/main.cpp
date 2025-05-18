//item11-1
/*
纯虚函数抽象类
要求：
o	 1. Person类，成员函数：构造函数、虚析构函数、纯虚函数work()；
数据成员：m_strName
o	 2. Worker类，成员函数：构造函数、work()；数据成员：m_iAge
o	 3. Dustman类，成员函数：构造函数、work()；
*/
#include <iostream>
using namespace std;
#include "Dustman.h"
#include "Person.h"
#include "Worker.h"
int main() {
	
	//Person person("Zhang");
	
	
//	Worker worker("Liu",20);
//	worker.work();
	Dustman dustman("Li",30);
	dustman.work();
	return 0;
}
