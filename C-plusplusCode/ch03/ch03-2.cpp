//ch03-2.cpp
#include<iostream>
#include<string>
using namespace std;

class Student
{
public:
	void setName(string _name)	{m_strName=_name;}
	string getName()	{return m_strName;}
	void setGender(string _gender)	{m_strGender=_gender;}
	string getGender()	{return m_strGender;	}
	int getScore()	{return m_iScore;}
	//void initScore(){m_iScore=0;}    //由于只读，需给设置一个初值。 
	void study(int _score){	m_iScore+=_score;}	//m_iScore=m_iScore+_score;
private:
	string m_strName;		 
	string m_strGender;
	int m_iScore = 0;		//关于数据成员赋初值，根据 C++11 标准是可以的
};
int main()
{
	Student stu;
	//stu.initScore();
	stu.setName("zhangsan");
	stu.setGender("女");
	stu.study(5);
	stu.study(3);
	cout<<stu.getName()<<" "<<stu.getGender()<<" "<<stu.getScore()<<endl;
	
}


