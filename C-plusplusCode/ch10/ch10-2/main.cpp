//item10-2
//ÐéÎö¹¹º¯Êý
#include "Circle.h"
#include "Rect.h"
#include <iostream>
using namespace std;

int main() {
	
	Shape *shape1=new Circle(5,1,1);
	Shape *shape2=new Rect(3,6);

	shape1->calcArea();
	shape2->calcArea();
	
	delete shape1;
	shape1=NULL;
	delete shape2;
	shape2=NULL;
	
	return 0;
}
