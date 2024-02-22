// 1
// 2 9 
// 3 8 10
// 4 7 11 14
// 5 6 12 13 15

#include<iostream>
using namespace std;
int main(){
    int count=0;
    for(int i=1; i<=5; i++){
        //count++;
        for(int j=1;j<=i;j++){
           count++;
            cout<<count<<" ";
        }
        cout<<endl;
    }
    return 0;
}