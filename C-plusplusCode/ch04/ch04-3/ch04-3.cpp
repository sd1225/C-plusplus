
#include <iostream>
#include<string>
#include "Teacher.h"
using namespace std;

/**********************************************************/
/*
����Teacher�ࣺ
*   �Զ��忽�����캯��
 ���ݣ�
	 ����   
	 ����
 ��Ա������
	���ݳ�Ա�ķ�װ����
*/
/***********************************************************/


Teacher test(Teacher t)
{
	cout << "test" << endl;
	return t;
}


int main()
{

	Teacher t1;
	Teacher t2;
	t2 = test(t1);
	

	system("pause");
	return 0;
}