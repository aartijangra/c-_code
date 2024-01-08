//multiple inheritance in which we derived a base class from more than one class.
#include<iostream>
using namespace std;
class car
{
    public:
    car(){
        cout<<"G Wagon"<<endl;
    }
};
class bike
{
    public:
    bike(){
        cout<<"yamaha"<<endl;
    }
};
class vehicle:public car,public bike{
    public:
    vehicle(){
        cout<<"These are my vehicles."<<endl;
    }
};
int main(){
    vehicle obj;
    return 0;
}