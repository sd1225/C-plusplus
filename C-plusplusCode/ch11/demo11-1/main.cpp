#include <iostream>
#include <string>
using namespace std;
class Student {
	public:
		Student(int n,string nam) { //定义构造函数
			cout<<"constructor-"<<n<<endl;
			num=n;
			name=nam;
		}
		~Student( ) {
			cout<<"destructor-"<<num<<endl;   //定义析构函数
		}
		void get_data( );                                 //成员函数声明
	private:
		int num;
		string name;
};

void Student::get_data( ) {                         //定义成员函数
	if(num==0) 	throw num;                            //如num=0,抛出int型变量num
	else cout<<num<<" "<<name<<endl;                 //若num≠0，输出num,name
	cout<<"in get_data()"<<endl;                     //输出信息，表示目前在get_data函数中
}

void fun( ) {
	Student stud1(1101,"Tan");               //建立对象stud1
	stud1.get_data( );                        //调用stud1的get_data函数
	Student stud2(0,"Zhang");                   //建立对象stud2
	stud2.get_data( );                        //调用stud2的get_data函数
}

int main( ) {
	
	cout<<"call fun( )"<<endl;                 //表示调用fun函数
	try {
		fun( );   								//调用fun函数
	} 
	catch(int n) {
		cout<<"num="<<n<<",error!"<<endl;       //表示num=0出错
	}
	
	return 0;
}

