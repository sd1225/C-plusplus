//ch08-2
#include "Person.h"
#include <iostream>
using namespace std;
Person::Person()
{
	cout<<"Person()"<<endl;
}
Person::~Person()
{
	cout<<"~Person()"<<endl;
}
void Person::eat()
{
	m_strName="Jim";
	m_iAge=20;
	cout<<m_strName<<" "<<m_iAge<<" "<<"eat()"<<endl;
}
