// Input Format: N = 3
// Result: 
// C
// B C
// A B C

// Input Format: N = 6
// Result:   
// F
// E F
// D E F
// C D E F
// B C D E F
// A B C D E F
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        for(char ch=('A'+n-i); ch<='A'+n-1; ch++){
            cout<<ch<<" ";

        }
        cout<<endl;
    }
   

}