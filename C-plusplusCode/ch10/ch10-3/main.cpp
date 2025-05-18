//item10-3
#include "Circle.h"
#include <iostream>
using namespace std;

int main() {
	
	Shape s;
	cout<<sizeof(s)<<endl;
	Shape *p = &s;
	cout<<p<<endl;
	//cout<<*p<<endl;

	Circle c(100);
	cout<<sizeof(c)<<endl;
	int *q = (int*)&c;
	cout<<q<<endl;
	cout<<*q<<endl;
	q++;
	cout<<*q<<endl;
	return 0;
}

