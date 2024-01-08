#include<iostream>
using namespace std;

int main()
{
    int n, temp=0, r=0, sum=0;

    cout<<"enter a number: "<<endl;
    cin>>n;
    temp=n;

    while(n>0){
    //to reverse this number
    r=n%10;
    sum=(sum*10)+r;
    n=n/10;
    }
    
    if(temp==sum){
        cout<<"the given number is palindrome"<<endl;
    }
    else{
        cout<<"the given number is not palindrome"<<endl;

    }

}