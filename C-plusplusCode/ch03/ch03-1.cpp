//demo3-1.cpp
#include <iostream>
using namespace std;
/*����һ�������ࣺ
		���ݳ�Ա: x�� y 		��Ա�������ֱ��ӡ x��y��ֵ*/ 
class Coordinate	//�������п��Կ�����Ĺ��� 
{
	public:
		int x;
		int y;
		void printX()
		{
			cout<<x<<endl;
		}
		void printY()
		{
			cout<<y<<endl;
		}
};
int main()
{
	//��ջ��ʵ�������� 
	Coordinate coor;
	coor.x=10;
	coor.y=20;
	coor.printX();
	coor.printY();
	return 0;
}

