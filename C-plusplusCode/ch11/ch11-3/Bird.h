//item11-3
#ifndef BIRD_H
#define BIRD_H

#include <string>
#include "Flyable.h"
using namespace std;

class Bird:public Flyable
{
	public:
		void foraging();
		virtual void takeoff();
		virtual void land();
};
#endif
