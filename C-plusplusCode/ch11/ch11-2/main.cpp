#include <iostream>
#include "FighterPlane.h"
using namespace std;

void flyMatch(Flyable *f1,Flyable *f2)
{
	f1->takeoff();
	f1->land();
	f2->takeoff();
	f2->land();
}

int main() {
	//Plane p1("001");
	//Plane p2("002");
	FighterPlane p1("001");
	FighterPlane p2("002");
	p1.printCode();
	p2.printCode();
	
	flyMatch(&p1,&p2);
	return 0;
}
