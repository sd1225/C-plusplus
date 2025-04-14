#include<iostream>
#include<string>
#include"Teacher.h"
using namespace std;

int main()
{
	Teacher tea;
	tea.setName("Tom");
	tea.setAge(20);
	cout<<tea.getAge()<<" "<<tea.getName()<<endl;
	tea.teach();
	system("pause");
	return 0;
}