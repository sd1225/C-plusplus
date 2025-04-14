#include <iostream>
#include <string>
using namespace std;

class Teacher
{
public:

	Teacher(string name="zhang", int age=20);      //有参数的默认构造函数
	Teacher(const Teacher &tea);
	void setAge(int age);
	void setName(string name);
	
	string getName();
	int getAge();


private:
	string m_strName;
	int m_iAge;
};