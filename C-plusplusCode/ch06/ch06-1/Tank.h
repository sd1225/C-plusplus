//ch06-1

class Tank
{
public:
	Tank(char code);
	~Tank();
	void fire();
	static int getCount();		
private:
	static int s_iCount;	//̹������ 
	char m_cCode;			//̹�˱�� 
};

//int Tank::s_iCount = 0;



