//ch05-1
#include <iostream>
#include "Line.h"
using namespace std;

int main() {
	Line *p = new Line(1, 2, 3, 4);
	p->printInfo();
	delete p;
	p = NULL;
	return 0;
}