// c++ program to create global variable of base class as friend func
/*
#include<iostream>
using namespace std;

class demo{
	private:
	    int a; 
	protected:
		int b;
	public:
		demo(){
			a=10;
			b=20;
		}

	friend void display(demo &obj);
};

void display(demo &obj){
	cout<<obj.a<<" " <<obj.b;
}

int main(){
	demo d;	
	display(d);
}
*/

//c++ program to create memberfunction of another class as friend function
#include<iostream>
using namespace std;
class demo;
class another{
    public:
    void memberFunc(demo &obj);
};
class demo{
	private:
	    int a; 
	protected:
		int b;
	public:
		demo(){
			a=10;
			b=20;
		}

	friend void another::memberFunc(demo&);
};

void another::memberFunc(demo &obj){
	cout<<obj.a<<" " <<obj.b;
}

int main(){
	
    another obj2;
    demo obj1;
	obj2.memberFunc(obj1);
}
