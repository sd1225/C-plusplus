//item9-4
#include "Farmer.h"
#include <iostream>
using namespace std;
Farmer::Farmer(string name,string color):Person("Farmer"+color)
{
	m_strName=name;
	cout<<"Farmer()"<<endl;
}
Farmer::~Farmer()
{
	cout<<"~Farmer()"<<endl;
}
void Farmer::sow()
{
	cout<<"Farmer--sow()"<<endl;	
}
