//item8-3
#include "Soldier.h"
#include <iostream>
using namespace std;

Soldier::Soldier()
{
}

void Soldier::work()
{
	m_strName="Jim";
	m_iAge=20;
	cout<<m_strName<<endl;
	cout<<m_iAge<<endl;
	cout<<"Soldier--work()"<<endl;
}
