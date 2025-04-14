//item5-8
#include <iostream>
#include "Array.h"
using namespace std;
Array::Array(int len){	this->len=len;}
Array::~Array(){}
//Array* Array::setLen(int len)
Array Array::setLen(int len)
{
	this->len=len;
	//return this;
	return *this;
}
int Array::getLen(){ return len; }
Array* Array::printInfo()	//不加引用return的是另外一个临时对象。 
//Array* Array::printInfo()
{
	cout<<"len="<<len<<endl;
	return this;
	//this是一个指针，加*就是一个对象，而返回值是Array的对象。
	//return *this; 
/*	cout<<this<<endl;*/
}
