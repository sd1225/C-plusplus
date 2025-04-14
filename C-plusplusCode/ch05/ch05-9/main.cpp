//ch05-9
#include <iostream>
#include "Line.h"
using namespace std;

int main() {
	Line line(1, 2, 3, 4);
	line.printInfo();

	const Line line2(5, 6, 7, 8);
	line2.printInfo();

	return 0;
}

