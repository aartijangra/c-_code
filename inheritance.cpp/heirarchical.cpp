//in heirarchical inheritance more than one base class is derives from a singe parent class.
#include<iostream>
using namespace std;
class A
{
    public:
    
    void set(){
        cout<<"hii"<<endl;
        
        cout<<"helloo"<<endl;
        
    }
};
class B:public A
{

};
class C:public A
{
   
};
int main(){
    C obj;
    B obj2;
    obj.set();
    obj2.set();
    return 0;
}