//item11-3
#include <iostream>
#include <typeinfo>
#include "Bird.h"
#include "Plane.h"
using namespace std;
void doSomething(Flyable *obj)
{
	cout<<typeid(*obj).name()<<endl;
	obj->takeoff();
	  
	if(typeid(*obj)==typeid(Bird))
	{
		Bird *bird=dynamic_cast<Bird *>(obj);
		bird->foraging();
	}
	if(typeid(*obj)==typeid(Plane))
	{
		Plane *plane=dynamic_cast<Plane *>(obj);
		plane->carry();
	}
	obj->land();
}

int main() {	
	Plane p;
	doSomething(&p);
	
	Bird b;
	doSomething(&b);
	
	int a=0;
	cout<<typeid(a).name()<<endl;	
	return 0;
}
