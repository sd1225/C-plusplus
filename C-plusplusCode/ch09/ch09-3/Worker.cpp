//item9-3
#include "Worker.h"
#include <iostream>
using namespace std;
Worker::Worker(string code)
{
	m_strCode=code;
	cout<<"Worker()"<<endl;
}
Worker::~Worker()
{
	cout<<"~Worker()"<<endl;
}
void Worker::carry()
{
	cout<<m_strCode<<endl;
	cout<<"Worker--play()"<<endl;
}
