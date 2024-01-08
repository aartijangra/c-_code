//c++ program to swap two numbers by using third variable
/*#include<iostream>
using namespace std;

int main()
{
    int n1, n2, temp;
    cout<<"enter first number: "<<endl;
    cin>>n1;
    cout<<"enter second number: "<<endl;
    cin>>n2;
    cout<<"Numbers before swapping: "<<n1<<" "<<n2<<endl;
    temp=n1;
    n1=n2;
    n2=temp;
    cout<<"Numbers after swapping: "<<n1<<" "<<n2<<endl;

    return 0;
}
*/

//c++ program to swap two digits without using third variable

#include<iostream>
using namespace std;

int main()
{
    int n1, n2;
    cout<<"enter first number: "<<endl;
    cin>>n1;
    cout<<"enter second number: "<<endl;
    cin>>n2;
    cout<<"Numbers before swapping: "<<n1<<" "<<n2<<endl;
    n1=n1*n2;
    n2=n1/10;
    n1=n1/n2;
    cout<<"Numbers after swapping: "<<n1<<" "<<n2<<endl;

    return 0;
}