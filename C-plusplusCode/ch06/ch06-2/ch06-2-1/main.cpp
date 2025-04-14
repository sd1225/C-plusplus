#include<iostream>
#include<string>
#include "Time.h"
using namespace std;

void printTime(Time& t)
{
	cout << t.m_iHour << ":" << t.m_iMinute << ":" << t.m_iSecond << endl;
}

int main(void)
{	
	Time t(6, 34, 25);
	printTime(t);
	return 0;
}