// When function is called within the same function, it is known as recursion in C++. 
// The function which calls the same function, is known as recursive function.
//factorial program using recursion

#include <iostream>
using namespace std;

int fact(int n) {
   if ((n==0)||(n==1))
   return 1;
   else
   return n*fact(n-1);
}
int main() {
   int n ;
   cout<<"enter a number: "<<endl;
   cin>>n;
   cout<<"Factorial of "<<n<<" is "<<fact(n);
   return 0;
}