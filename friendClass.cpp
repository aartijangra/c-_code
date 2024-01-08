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

		friend class remo;
};
class remo{
	public:
		void display(demo &obj){
			cout<<obj.a<<" " <<obj.b;
		}


};
int main(){
	demo d;
	remo r;
	r.display(d);

}