//demo6-2
#include<iostream>
using namespace std;

class Student
{private:
	int num;
	int age;
	float score;
	static float sum;
	static int count;
public:
	Student(int n = 1001,int=20,int=90);
	void total();
	static float average();
};

float  Student::sum =0;
int  Student::count =0;

Student::Student(int n,int a,int s):num(n),age(a),score(s)	
{ 	 }	 

void Student::total( )
{ 	
	sum+=score;
	count++;   }  

float  Student::average()
{  
	//cout<<sum<<endl;
	//cout<<stud[1].score<<endl;
	return(sum/count); }

int main()
{  

	Student stud[3]={
		Student(1001,18,70),
		Student(1002,19,79),
		Student(1005,20,98)    };
		
		for(int i=0;i<3;i++)
			stud[i].total();
		cout << "3个学生的平均成绩是" ;
		cout<<Student::average() << endl;
		return 0;
}

