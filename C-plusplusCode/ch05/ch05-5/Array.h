//ch05-5
class Array
{
public:
	Array(int len);
	~Array();
	void setLen(int len);
	int getLen();
	Array* printInfo();
private:
	int len;	//数据成员与参数同名 
};
