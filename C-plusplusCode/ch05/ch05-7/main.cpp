//ch05-7
#include <iostream>
#include "Array.h"
using namespace std;

int main() {
	Array arr1;
	arr1.setCount(5);
	
	Array arr2(arr1);
	cout<<"arr2.m_iCount="<<arr2.getCount()<<endl;

	return 0;
}

