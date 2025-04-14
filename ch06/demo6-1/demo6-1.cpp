#include<iostream>
#include<string>
using namespace std;

class Tank		
{
   public:
	Tank( ) { s_iCount++;  }
	~Tank( ) { s_iCount--;  }
	static int getCount( ){ return s_iCount; }
	static int s_iCount;
   private:
	string m_strCode;
};
//int Tank::s_iCount;


int main()	
{
    cout<<Tank::getCount()<<endl;
    cout<<Tank::s_iCount<<endl;
    Tank tank;
    cout<<tank.getCount()<<endl;
    cout<<tank.s_iCount<<endl;
    return 0;
}
