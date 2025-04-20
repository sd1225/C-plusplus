//ch07-2
class Coordinate
{
//	friend Coordinate& operator++(Coordinate&c);
// 	friend Coordinate& operator++(Coordinate&c,int);
	public:
		Coordinate(int x,int y);
//		Coordinate &operator++(); 		//前置++	
//		Coordinate operator++(int); 	//后置++，不能加& 
		int getX();
		int getY();
	private:
		int m_iX;
		int m_iY;
};

