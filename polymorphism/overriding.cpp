// C++ program to access overridden function using pointer of Base type that points to an object of Derived class
#include <iostream>
using namespace std;

class Parent {
public:
	void demo()
	{
		cout << "Base Function" << endl;
	}
};

class Child : public Parent {
public:
	void demo()
	{
		cout << "Derived Function" << endl;
	}
};

int main()
{
	Child obj1;
	Parent* ptr = &obj1;

	// call function of Base class using ptr
	ptr->demo();
    return 0;
}
