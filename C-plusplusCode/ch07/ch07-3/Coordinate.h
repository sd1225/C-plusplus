//ch07-3

//����Coordinate������
// ���ݳ�Ա��m_iX��m_iY
// ��Ա���������캯����getX()��getY()

// ˫Ŀ+��������أ���Ա��������Ԫ������ 
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
