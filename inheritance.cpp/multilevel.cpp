//multilevel inheritance when a derived class is dervied from other class
#include<iostream>
using namespace std;

class A
{
    public:
    int n1,n2;
    void num()
    {
        cout<<"enter first number"<<endl;
        cin>>n1;
        cout<<"enter second number"<<endl;
        cin>>n2;
    }
};
class B:public A
{
    public:
    int n;
    void mul(){
        n=n1*n2;
        cout<<"product :"<<n<<endl;
    }
};
class C:public B
{
    public:
    int m;
    void sqr(){
        m=n*n;
        cout<<"square of product :"<<m;
    }
};
int main(){
    C obj;
    obj.num();
    obj.mul();
    obj.sqr();

    return 0;
}