#include <iostream>  
using namespace std;  

void area(int side)  
{  
side = 5;  
}  
 
int main()  
{  
int side = 3;  
area(side);  
cout << "Value of the area is: " << side*side<< endl;  
return 0;  
}  
