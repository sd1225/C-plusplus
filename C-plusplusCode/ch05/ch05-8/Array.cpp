//ch05_8
//Array.cpp
#include <iostream>
#include "Array.h"
using namespace std;
Array::Array(int count){		 
	m_iCount=count;	
	m_pArr = new int[m_iCount];		//申请一块内存 
	for(int i=0;i<m_iCount;i++)		//为每个元素赋值 
		m_pArr[i] = i;
	cout<<"Array"<<endl;
}
Array::Array(const Array &arr){

	m_iCount=arr.m_iCount;
	m_pArr=arr.m_pArr;			//浅拷贝
//	m_pArr = new int[m_iCount];		//深拷贝
//	for(int i=0;i<m_iCount;i++)
//		m_pArr[i] = i;
	cout<<"Array &"<<endl;
}
Array::~Array(){

	delete []m_pArr;
	m_pArr = NULL;
	cout<<"~Array"<<endl;
}
void Array::setCount(int count){m_iCount=count;}

int Array::getCount(){return m_iCount;}

void Array::printAddr()
{cout<<m_pArr<<endl;}

void Array::printAdd()
{
	for(int i=0;i<m_iCount;i++)
		cout<<m_pArr[i]<<" ";
	cout<<endl;
}
