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
		void printAddr(); 	//��ָ���ֵ��ӡ���� 
		void printAdd();	//��ָ����ָ���Ԫ�ش�ӡ����   
	private:
		int m_iCount;
		int *m_pArr;		//����һ�����ݳ�Ա����һ��ָ��
};

