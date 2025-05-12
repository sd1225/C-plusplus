//ch09-2
#include <iostream>
using namespace std;
#include "Soldier.h"

int main() {
	Person *p = new Soldier();
	p->play();
	//p->work();
	delete p;
	p = NULL;
	return 0;
}
