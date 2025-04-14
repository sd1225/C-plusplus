#include<iostream>
#include<string>
#include"Match.h"
#include"Time.h"
using namespace std;

int main(void)
{
	Time t(16, 40, 25);
	Match m;
	m.printTime(t);
	return 0;
}