//item5-8
#include <iostream>
#include "Array.h"
using namespace std;

int main() {
	Array arr1(10);
	arr1.printInfo()->setLen(5);
	cout<<"len="<<arr1.getLen()<<endl;
/*	cout<<&arr1<<endl;*/
	return 0;
}
