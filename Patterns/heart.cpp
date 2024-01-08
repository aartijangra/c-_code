#include<iostream>
using namespace std;

int main()
{
    int n=10;

    for(int i=n/2; i<n; i+=2){
        for(int j=1; j<n-i; j+=2){
            cout<<" ";
        }
        for(int j=1; j<i+1; j++){
            cout<<"*";
        }
        for(int j=1; j<n-i +1; j++){
            cout<<" ";
        }
        for(int j=1; j<i+1; j++){
            cout<<"*";
        }
    cout<<endl;
    }

    for(int i=n; i>0; i--){
        for(int j=0; j<n-i; j++){
            cout<<" ";
        }
        for(int j=1; j<i*2; j++){
            cout<<"*";
        }
        cout<<endl;

    }
}