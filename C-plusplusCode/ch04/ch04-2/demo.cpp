#include<iostream>
#include<string>
#include"Teacher.h"
using namespace std;

int main()
{
	Teacher t1;
	Teacher t2("Mark",19,150);
	Teacher t3("Lily");
	cout<<t1.getName()<<","<<t1.getAge()<<","<<t1.getMax()<<endl;
	cout<<t2.getName()<<","<<t2.getAge()<<","<<t2.getMax()<<endl;
	cout<<t3.getName()<<","<<t3.getAge()<<","<<t3.getMax()<<endl;
	return 0 ;
}
