//demo3-1.cpp
#include <iostream>
using namespace std;
/*定义一个坐标类：
		数据成员: x和 y 		成员函数：分别打印 x和y的值*/ 
class Coordinate	//从类名中可以看出类的功能 
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
	//从栈中实例化对象 
	Coordinate coor;
	coor.x=10;
	coor.y=20;
	coor.printX();
	coor.printY();
	return 0;
}

