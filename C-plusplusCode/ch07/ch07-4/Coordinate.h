//ch07-4
#include <ostream>		//�˴�ע�� 
using namespace std;
class Coordinate
{
	friend Coordinate &operator-(Coordinate &c); //������������� 
	//friend Coordinate operator+(const Coordinate &c1,const Coordinate &c2);  //˫Ŀ+���������
	friend ostream &operator<<(ostream &output,const Coordinate &coor);	//���<<���������
	public:
		Coordinate(int x,int y);
		Coordinate &operator++(); 	//ǰ��++	
		Coordinate operator++(int); //����++
		Coordinate operator+(const Coordinate &c);
			
		int getX();
		int getY();
	private:
		int m_iX;
		int m_iY;
};

