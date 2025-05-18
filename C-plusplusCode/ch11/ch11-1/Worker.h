//item11-1
#ifndef WORKER_H
#define WORKER_H
#include "Person.h"
class Worker:public Person
{
	public:
		Worker(string name,int age);
		//virtual void work();
	private:
		int m_iAge;
};
#endif
