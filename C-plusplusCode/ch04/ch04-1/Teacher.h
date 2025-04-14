/*
定义Teacher类：
自定义无参构造函数
自定义有参构造函数
数据：名字   年龄
成员函数：数据成员的封装函数
*/
#include<iostream>
#include<string>
using namespace std;

class Teacher
{

	public:
		Teacher();
		Teacher(string name,int age=25);
		void setName(string name);
		string getName();
		void setAge(int age);
		int getAge();

private:
	string m_strName;
	int m_iAge;
};
