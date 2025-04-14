#include<iostream>
#include<string>
#include"Teacher.h"
using namespace std;


Teacher::Teacher(string name, int age, int max):m_strName(name),m_iAge(age),m_iMax(max)
{	
	m_strName = "Jerry";
	m_iAge = 50;
	cout << "test!" << endl;

}
void Teacher::setName(string name)
{
	m_strName = name;
}
string Teacher::getName()
{
	return m_strName;
}
void Teacher::setAge(int age)
{
	m_iAge = age;
}

int Teacher::getAge()
{
	return m_iAge;
}

int Teacher::getMax()
{
	return m_iMax;
}
		

		
