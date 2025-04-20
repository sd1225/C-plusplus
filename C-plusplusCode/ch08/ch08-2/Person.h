//ch08-2
#ifndef PERSON_H
#define PERSON_H
#include <string>
using namespace std;

class Person
{
	public:
		Person();
		~Person();
	private:		
		void eat();		
		string m_strName;
		int m_iAge;
};

#endif

