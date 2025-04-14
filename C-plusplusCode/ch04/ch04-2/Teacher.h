/*
定义Teacher类：
自定义有参默认构造函数
*使用初始化列表初始化数据
数据：名字   年龄     
	  老师可以带的最多学生个数，常量
成员函数：数据成员的封装函数


*/
#include<iostream>
#include<string>
using namespace std;

class Teacher
{
	public:	
		Teacher(string name ="Tom", int age = 20, int max = 5);
		void setName(string name);
		string getName();
		void setAge(int age);
		int getAge();
		int getMax();

	private:
		string m_strName;
		int m_iAge;
		const int m_iMax;
		
};
