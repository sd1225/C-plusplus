//ch07-1
//Coordinate.h
class Coordinate
{

	public:
		Coordinate(int x,int y);
		Coordinate& operator-();
		int getX();
		int getY();
	private:
		int m_iX;
		int m_iY;
};

