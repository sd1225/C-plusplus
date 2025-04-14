//item5-4
//Array.h
class Array
{
	public:
		Array(int count);
		Array(const Array&arr);
		~Array();
		void setCount(int count);
		int getCount();
		void printAddr(); 	//将指针的值打印出来 
		void printAdd();	//将指针所指向的元素打印出来   
	private:
		int m_iCount;
		int *m_pArr;		//增加一个数据成员，是一个指针
};

