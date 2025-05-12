//item9-2
#include <iostream>
using namespace std;
#include "MigrantWorker.h"

int main() {

	MigrantWorker *p=new MigrantWorker("Merry","100");
	p->carry();
	p->sow();
	delete p;
	p=NULL;

	return 0;
}
