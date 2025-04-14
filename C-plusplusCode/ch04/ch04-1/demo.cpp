#include<iostream>
#include<string>
#include"Teacher.h"
using namespace std;

int main()
{
	Teacher t1;
	Teacher t2("Jerry",19);
	Teacher t3("Lily");
	cout<<t1.getName()<<","<<t1.getAge()<<endl;
	cout<<t2.getName()<<","<<t2.getAge()<<endl;
	cout<<t3.getName()<<","<<t3.getAge()<<endl;
	system("pause");
	return 0 ;
}
