//ch05-9
class Coordinate	
{
   public:
	Coordinate(int x,int y);
	~Coordinate();
	void setX(int x);
	//void setX(Coordinate *this,int x);
	int getX() const;	//新增const 
	void setY(int y);
	int getY() const;	//新增const 
   private:
	int m_iX;
	int m_iY;
};

