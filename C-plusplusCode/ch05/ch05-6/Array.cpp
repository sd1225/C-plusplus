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
Array* Array::printInfo()	//��������return��������һ����ʱ���� 
//Array* Array::printInfo()
{
	cout<<"len="<<len<<endl;
	return this;
	//this��һ��ָ�룬��*����һ�����󣬶�����ֵ��Array�Ķ���
	//return *this; 
/*	cout<<this<<endl;*/
}
