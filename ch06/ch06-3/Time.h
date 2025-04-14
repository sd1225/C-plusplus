//ch06-3
#ifndef TIME_H
#define TIME_H

class Time
{
	friend class Match;
	public:
		Time(int hour,int min,int sec);
	private:
		void printTime();
		int m_iHour;
		int m_iMinute;
		int m_iSecond;
};

#endif
