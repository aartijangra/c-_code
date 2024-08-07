#include <iostream>;
using namespace std;
bool palindrome(string s){
    int n = s.length();
    int l = 0; int r = n-1;
    while(l<r){
        if(s[l] != s[r]){
            cout<<"the string is not palindrome"<<endl;
            return false;
            
        }
        l++; r--;     
    }
    cout<<"the string is palindrome"<<endl;
    return true;
    

}
int main(){
    string s;
    cout<<"enter the string: "<<endl;
    cin>>s;
    palindrome(s);
    return 0;

}