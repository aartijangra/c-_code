#include<iostream>
using namespace std;

int main()
{
    int n,r,reverse=0;
    cout<<"Enter a number: "<<endl;
    cin>>n;
    while(n>0){
        r=n%10;
        reverse=(reverse*10)+r;
        n=n/10;
    }
    cout<<"The reversed number is: "<<reverse<<endl;
    return 0;
}