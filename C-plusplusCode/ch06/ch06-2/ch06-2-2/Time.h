//ch06-2
#ifndef TIME_H
#define TIME_H
#include"Match.h"

//友元函数代码演示
//友元代码演示

class Time
{	
	friend void Match::printTime(Time &t);
	public:
		Time(int hour,int min,int sec);
	private:
		int m_iHour;
		int m_iMinute;
		int m_iSecond;
};

#endif