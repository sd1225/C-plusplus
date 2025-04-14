#include<iostream>
#include<string>
#include"Teacher.h"
using namespace std;

Teacher::Teacher()
{
	m_strName = "Tom";
	m_iAge = 20;
	cout<<"Teacher()"<<endl;
}
Teacher::Teacher(string name,int a)
{
	m_strName = name;
	m_iAge = a;
	cout<<"Teacher(string, int)"<<endl;
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
		

