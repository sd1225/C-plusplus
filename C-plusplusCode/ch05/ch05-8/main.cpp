//item5-4
/*
1������һ��Array�࣬���ݳ�ԱΪm_iCount,
��Ա�����������ݷ�װ���������캯�����������캯��������������
ͨ����ʾ�����ǳ����ԭ��

2���������ݳ�Աm_pArr��������m_pArr��ַ�鿴������
ͬʱ���칹�캯�����������캯��������������
��������ԭ��ͱ�Ҫ�ԡ�
*/
#include <iostream>
#include "Array.h"
using namespace std;

int main() {
	Array arr1(5);
	Array arr2(arr1);
	
	arr1.printAddr();
	arr1.printAdd();

	arr2.printAddr();
	arr2.printAdd();

	return 0;
}

