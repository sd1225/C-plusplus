//item11-1
#include <iostream>
#include "Worker.h"
using namespace std;
Worker::Worker(string name,int age):Person(name)
{
	m_iAge=age;
}

//void Worker::work()
//{
//	cout<<"work"<<endl;
//}
