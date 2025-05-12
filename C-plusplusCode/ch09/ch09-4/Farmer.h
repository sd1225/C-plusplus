//item9-4
#include <string>
#include "Person.h"
using namespace std;

class Farmer: virtual public Person
{
	public:
		Farmer(string name="Jack",string color="black");
		~Farmer();
		void sow();
	protected:
		string m_strName;
	
};
