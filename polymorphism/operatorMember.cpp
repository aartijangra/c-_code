//binary operator + program by using member function  

#include<iostream>   
using namespace std;

class complex
{
	int x,y;
	public:
		complex(){}
		complex(int x, int y)
		{
			this->x=x;
			this->y=y;
		}
		void display()
		{
			cout<<x<<endl;
			cout<<y<<endl;
		}
		complex operator+(complex &obj)
		{
			complex temp;
			temp.x = x+obj.x;
			temp.y = y+obj.y;
			return temp;
		}		
};
int main()
{
	complex c1(15,30);
	complex c2(20,35);
	complex c3;
	c3=c1+c2;   
	c3.display();
	return 0;
	
}