#include <iostream>
#include <string>

using namespace std;


class Teacher
{
public:

	Teacher(string name="zhang", int age=20);      //�в�����Ĭ�Ϲ��캯��
	Teacher(const Teacher &tea);					//�Զ��忽�����캯��
	~Teacher();

	void setAge(int age);
	void setName(string name);
	
	string getName();
	int getAge();


private:
	string m_strName;
	int m_iAge;
};