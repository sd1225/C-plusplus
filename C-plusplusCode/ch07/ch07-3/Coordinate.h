//ch07-3

//定义Coordinate坐标类
// 数据成员：m_iX和m_iY
// 成员函数：构造函数、getX()和getY()

// 双目+运算符重载（成员函数、友元函数） 
class Coordinate
{
friend Coordinate operator+(const Coordinate &c1,const Coordinate &c2);	  
	public:
		
		Coordinate(int x = 0,int y = 0);  			
		int getX();
		int getY();
	private:
		int m_iX;
		int m_iY;
};



//Coordinate operator+(const Coordinate &c);
