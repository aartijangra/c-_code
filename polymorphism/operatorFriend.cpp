//binary operator overloading using friend function

#include<iostream>
using namespace std;

class complex
{
	public:
		int x,y;
		
		complex(){
		}
		complex(int x, int y){
			this->x=x;
			this->y=y;
			
		}
		void display()
		{
			cout<<x<<endl;
			cout<<y<<endl;
		}
		friend complex operator+(complex &obj1 , complex &obj2);
	}; //end of class
	
	complex operator+(complex &obj1, complex &obj2)
		{
			complex temp;
			temp.x=obj1.x+obj2.x;
			temp.y=obj1.y+obj2.y;
			return temp;
			
		}
	
 
int main()
{
	complex c1(21 ,31 );
	complex c2( 1, 1);
	complex c3;
	c3=c1+c2;
	
	c3.display();
	
	
}