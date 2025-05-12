//item9-4
#include <iostream>
using namespace std;
#include "MigrantWorker.h"

int main() {

	MigrantWorker *p=new MigrantWorker("Merry","100","yellow");	
	p->printColor();
	//p->Worker::printColor();
	//p->Farmer::printColor();
	
	delete p;
	p=NULL;

	return 0;
}
