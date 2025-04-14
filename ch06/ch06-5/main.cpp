//item6-5
#include <iostream>
#include "MyArray.h"
using namespace std;

int main() {
	MyArray<int,5,6> arr;
	//实例化一个有5个元素的int数组，里面每个元素值为6；
	arr.display(); 
	return 0;
}
