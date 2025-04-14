#include "Teacher.h"
//#include<iostream>
//#include<string>
//using namespace std;


	Teacher::Teacher(string name, int age):m_strName(name),m_iAge(age)
	{
		cout<<"Constructor called"<<" , "<<m_strName<<endl;
	}

	Teacher::Teacher(const Teacher &tea)
	{
		m_strName = tea.m_strName;
		m_iAge = tea.m_iAge;
		cout<<"Copy constructor called"<<" , "<<m_strName<<endl;
	}

	Teacher::~Teacher()
	{
		cout<<"Destructor called"<<" , "<<m_strName<<endl;
	}

	string Teacher::getName()
	{
		return m_strName;
	}
	int Teacher::getAge()
	{
		return m_iAge;
	}
	void Teacher::setName(string name)
	{
		m_strName = name;
	}
	void Teacher::setAge(int age)
	{
		m_iAge = age;
	}

