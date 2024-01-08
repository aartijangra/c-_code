// function overloading 

#include <iostream>
using namespace std;

class demo {
public:
	
	void func(int x)
	{
		cout << "value of x is " << x << endl;
	}

	void func(double x)
	{
		cout << "value of x is " << x << endl;
	}

	void func(int x, int y)
	{
		cout << "value of x and y is " << x << ", " << y
			<< endl;
	}
};

int main()
{
	demo obj;
	obj.func(7);
	obj.func(9.8);
	obj.func(85, 64);
	return 0;
}
