/*You are developing a currency converter application for an international finance company. 
The application is designed to convert an amount of money from USD (United States Dollar) to the desired 
target currency using a specific exchange rate. The application uses dynamic memory allocation with the new 
and delete operators to handle exchange rates. 
Note: This kind of question will help in clearing Infosys recruitment.

Input format:
The first line contains the exchange rate. The second line contains the amount in USD.

Output format:
The output displays the converted amount.

Code constraints:0 < exchange rate < 1000
                0 < amount < 1000000

Sample test cases:
Input 1:
85
1000
Output 1:
85000.00
*/



#include<iostream>
using namespace std;

int main(){

    double *exchange_rate = new double ;
    cin>>*exchange_rate;
    if(*exchange_rate<=0 || *exchange_rate>=1000){
        cout<<"invalid exchange rate"<<endl;
    }

    double *usd_amt;
    cin>>*usd_amt;

    if(*usd_amt<=0 || *usd_amt>=1000000){
        cout<<"invalid amount"<<endl;
    }

    double converted_amt;
    converted_amt=(*exchange_rate) * (*usd_amt);

    cout<<converted_amt<<endl;

    delete exchange_rate;
    delete usd_amt;

    return 0;


}