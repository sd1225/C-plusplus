//ch09-2
#ifndef SOLDIER_H
#define SOLDIER_H

#include "Person.h"
class Soldier:public Person
{
	public:
		Soldier(string name="Jerry",int age=20);
		virtual ~Soldier();		
		void work();
	protected:
		int m_iAge;
	
};

#endif
