#include<iostream>
using namespace std;
string switchCh(string s, char ch1, char ch2){
    int n = s.length();
    string result = s;
    for(int i=0; i<n; i++){
        if(s[i]==ch1){
            result[i] = ch2;
        }
        else if(s[i]==ch2){
            result[i] = ch1;
        }
    }
    return result;
}
int main(){
    string s;
    char ch1, ch2;
    cout<<"enter the string: "<<endl;
    cin>>s;
    cout<<"enter the charaters you want to replace"<<endl;
    cin>>ch1>>ch2;
    cout<<switchCh(s,ch1,ch2)<<endl;
}