/*Jacob is a software developer working on a project that involves solving and analyzing various types of 
mathematical equations. His team decides to use a class called Quadratic Equation to handle quadratic equations.
As part of the implementation, he has written a function solveAndDisplayRoots() that calculates and displays the 
roots of the quadratic equation.
The code seems to work correctly, but his team lead asks him to add a feature to allow users to choose whether 
they want the roots in the standard form or the complex form (e.g., "1+ 2i and 1-21").
He needs to implement this feature while ensuring that the code maintains its functionality for both real and 
complex roots. Write a program that accomplishes this task.
Input format:The input consists of three floating-point numbers separated by spaces (a, b, and c),
 representing the coefficients of the quadratic equation.

Output format:

The program should display the roots of the quadratic equation in the following format:
If the roots are real and distinct: "Root 1: <rootl>" "Root 2: <root2>"
If the roots are real and equal: "Root: <root>"
If the roots are complex: "Root 1: <realPart> + <imaginaryPart>i" "Root 2: <realPart> - <imaginaryPart>I"
Code constraints:
The coefficients (a, b, and c) of the quadratic equation will be real numbers.

Sample test cases:

Input 1:

Output 1:

1-3 2

Root 1: 2

Root 2: 1

Input 2:

Output 2:

2-42

Root: 1
Input 3:

Output 3:

125

Root 1: -1 + 21

Root 2: -1 - 21*/



#include<iostream>
#include<cmath>
using namespace std;

class QuadraticEquation{
    public:
    void solveAndDisplayRoots(float a, float b, float c){

        float d=(b*b)-(2*a*c);
        if(d>0){
            float root1 = (-b+sqrt(d))/(2*a);
            float root2 = (-b-sqrt(d))/(2*a);
            cout<<"Root 1: "<<root1<<endl;
            cout<<"Root 2: "<<root2<<endl;

        }
        else if(d=0){
            float root1 = -b/(2*a);
            cout<<"Root 1:"<<root1<<endl;
        }
        else{
            float real = -b/(2*a);
            float img = (sqrt(-d))/(2*a);

            cout<<"Root 1: "<<real+img<<"i"<<endl;
            cout<<"Root 2: "<<real-img<<"i"<<endl;

        }
    }

};
int main(){
    float a,b,c;
    cin>>a>>b>>c;
    QuadraticEquation obj;
    obj.solveAndDisplayRoots(a,b,c);

    return 0;


}

