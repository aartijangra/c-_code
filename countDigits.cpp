/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count=0;
    while(n>0){
        int r=n%10;
        n=n/10;
        count++;
    }
    cout<<count;
    
    return 0;
}
*/

//another way to count digits is
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    int count= (int) (log10(n)+1);
   
    cout<<count;
    
    return 0;
}

