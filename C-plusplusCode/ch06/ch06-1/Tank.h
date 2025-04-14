//ch06-1

class Tank
{
public:
	Tank(char code);
	~Tank();
	void fire();
	static int getCount();		
private:
	static int s_iCount;	//坦克数量 
	char m_cCode;			//坦克编号 
};

//int Tank::s_iCount = 0;



