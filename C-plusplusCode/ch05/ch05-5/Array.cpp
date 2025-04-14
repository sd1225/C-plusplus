//ch05-5
#include <iostream>
#include "Array.h"
using namespace std;
Array::Array(int len)
{
	this->len=len;
}
Array::~Array()
{
}
void Array::setLen(int len)
{
	this->len=len;
}
int Array::getLen()
{
	return this->len;
}
Array* Array::printInfo()
{
	cout<<"len = "<<len<<endl;
	return this;
}
