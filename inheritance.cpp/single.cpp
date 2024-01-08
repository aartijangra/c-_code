#include<iostream>
using namespace std;

class A
{
    public:
    void car(){
        cout<<"this is a car."<<endl;
    }
};
class B: public A
{
    public:
    void bike(){
        car();
        cout<<"this is a bike.";
    }
};
int main(){
    B obj;
    obj.bike();
    return 0;
}