#include<string>
using namespace std;

class Teacher
{
private:
	string m_strName;
	int m_iAge;
public:
	void setName(string name);
	string getName();
	void setAge(int age);
	int getAge();
	void teach();
};