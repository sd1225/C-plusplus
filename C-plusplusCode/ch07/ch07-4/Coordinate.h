//ch07-4
#include <ostream>		//此处注意 
using namespace std;
class Coordinate
{
	friend Coordinate &operator-(Coordinate &c); //负号运算符重载 
	//friend Coordinate operator+(const Coordinate &c1,const Coordinate &c2);  //双目+运算符重载
	friend ostream &operator<<(ostream &output,const Coordinate &coor);	//输出<<运算符重载
	public:
		Coordinate(int x,int y);
		Coordinate &operator++(); 	//前置++	
		Coordinate operator++(int); //后置++
		Coordinate operator+(const Coordinate &c);
			
		int getX();
		int getY();
	private:
		int m_iX;
		int m_iY;
};

