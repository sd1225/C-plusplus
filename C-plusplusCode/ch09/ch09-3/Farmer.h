//item9-3
#include <string>
using namespace std;

class Farmer
{
	public:
		Farmer(string name="Jack");
		virtual ~Farmer();
		void sow();
	protected:
		string m_strName;
	
};
