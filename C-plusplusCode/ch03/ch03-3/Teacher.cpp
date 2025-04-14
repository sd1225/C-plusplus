#include"Teacher.h"
#include<iostream>
#include<string>
using namespace std;

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

void Teacher::teach()
{
	cout<<"C plus plus!"<<endl;
}