//ch08-2
#ifndef WORKER_H
#define WORKER_H
#include "Person.h"

class Worker:public Person	//public����ʡ�� 
{
	public:
		Worker();
		~Worker();
		void work();
		int m_iSalary;
};

#endif
