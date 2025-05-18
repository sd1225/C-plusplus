#ifndef FIGHTERPLANE_H
#define FIGHTERPLANE_H

#include <string>
#include "Plane.h"
using namespace std;
class FighterPlane:public Plane
{
	public:
		FighterPlane(string code);
		virtual void takeoff();
		virtual void land();
};
#endif
