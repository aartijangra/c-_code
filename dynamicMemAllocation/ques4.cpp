/*Robin is working on a program that helps students in a mathematics class. He is tasked to write a program to 
calculate and store the first 'n' terms of an arithmetic progression, given the initial term and the common 
difference. The program should dynamically allocate memory for an array to store these terms and then compute 
and display the sum of the arithmetic progression. Help the students by writing a program that takes the 
necessary inputs and provides the expected output.

Input format :
The input contains three integers.
An integer 'n', representing the number of terms in the arithmetic progression.
An integer 'initialTerm', representing the first term of the arithmetic progression.
An integer 'commonDifference', representing the common difference between consecutive terms.

Output format :
The output displays the sum of the arithmetic progression.

Code constraints :
1 <= n <= 1000
-10^9 <= initialTerm <= 10^9 (
-10^9 <= commonDifference <= 10^9

Sample test cases :
Input 1 :
5 2 3
Output 1 :
40
Input 2 :
7 -2 4
Output 2 :
70
*/

#include<iostream>
#include<cmath>
using namespace std;

int main(){
    
    int n,a,d;
    cin>>n>>a>>d;
     int* terms = new int[n];
    //int sum = n*((2*a)+(n-1)*d)/2;
   // cout<<sum;
    terms[0] = a;
    for(int i=1;i<n;i++){
        terms[i] = terms[i-1]+d;
    }
    long sum=0;
    for(int i=0;i<n;i++){
        sum+=terms[i];
    }
    cout<<sum;
    delete[] terms;

}


