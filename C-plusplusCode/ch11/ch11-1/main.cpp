//item11-1
/*
���麯��������
Ҫ��
o	 1. Person�࣬��Ա���������캯�������������������麯��work()��
���ݳ�Ա��m_strName
o	 2. Worker�࣬��Ա���������캯����work()�����ݳ�Ա��m_iAge
o	 3. Dustman�࣬��Ա���������캯����work()��
*/
#include <iostream>
using namespace std;
#include "Dustman.h"
#include "Person.h"
#include "Worker.h"
int main() {
	
	//Person person("Zhang");
	
	
//	Worker worker("Liu",20);
//	worker.work();
	Dustman dustman("Li",30);
	dustman.work();
	return 0;
}
