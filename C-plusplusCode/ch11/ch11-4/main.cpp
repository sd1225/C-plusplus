//ch11-4 

//�쳣����
//	1.����Exception�࣬��Ա������printException����������
//	2.����IndexException�࣬��Ա������ printException

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
