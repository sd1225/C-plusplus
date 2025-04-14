//ch06-4.cpp
#include <iostream>
using namespace std;

template<typename T>
void display(T a)
{
	cout<<a<<endl;
}

template<typename T,class S>
void display(T t,S s)
{
	cout<<t<<endl;
	cout<<s<<endl;
}

template<typename T,int KSize>	//变量在实例化时变为常量 
void display(T a)
{
	for(int i=0;i<KSize;i++)
	{
		cout<<a<<endl;
	}
}

//demo6-4.cpp
int main()
{
	display<int>(10);
	display<double>(10.98);
	display<int,double>(5,8.3);
	display<int,5>(6);
}
