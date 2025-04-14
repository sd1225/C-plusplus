//item5-8
class Array
{
public:
	Array(int len);
	~Array();
	//Array* setLen(int len);
	Array setLen(int len);
	//void setLen(int len);
	int getLen();
	Array* printInfo();	
	//Array& printInfo();	
	//void printInfo();
private:
	int len;	//m_iLen
};
