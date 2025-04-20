//item8-3
#include "Person.h"
#include <iostream>
using namespace std;
Person::Person()
{
	m_strName="Merry";
}
void Person::play()
{
	cout<<m_strName<<endl;
	cout<<"Person--play()"<<endl;

}
