// C++ Program to Demonstrate the working of Abstraction. in this example we are not allowed to access the variables a and b directly.
#include <iostream>
using namespace std;

class implementAbstraction {
private:
	int a, b;

public:
	void set(int x, int y)
	{
		a = x;
		b = y;
	}

	void display()
	{
		cout << "a = " << a << endl;
		cout << "b = " << b << endl;
	}
};

int main()
{
	implementAbstraction obj;
	obj.set(10, 20);
	obj.display();
	return 0;
}
