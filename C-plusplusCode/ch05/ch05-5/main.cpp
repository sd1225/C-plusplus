//ch05-5
/*
����һ��Array��
 ���ݳ�Ա��len��ʾ���鳤��
 ��Ա���������캯������������
		len�ķ�װ����
		��Ϣ�������printInfo
*/ 

#include <iostream>
#include "Array.h"
using namespace std;

int main() {
	Array arr1(10);
	arr1.printInfo();
	cout<<arr1.getLen()<<endl;
		
	return 0;
}
