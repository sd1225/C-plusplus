/*
����Teacher�ࣺ
�Զ����в�Ĭ�Ϲ��캯��
*ʹ�ó�ʼ���б��ʼ������
���ݣ�����   ����     
	  ��ʦ���Դ������ѧ������������
��Ա���������ݳ�Ա�ķ�װ����


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
