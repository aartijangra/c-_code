#include <iostream>
using namespace std;
string ANDop(string s1, string s2){
    int n = s1.length();
    string result = "";
    for(int i=0; i<n; i++){
        if(s1[i]==1 && s2[i]==1) result+='1';
        else result+='0';
    }
    return result;
}

string ORop(string s1, string s2){
    int n = s1.length();
    string result = "";
    for(int i=0; i<n; i++){
        if(s1[i]==1 || s2[i]==1) result += '1';
        else result+='0';
    }
    return result;
}

string XORop(string s1, string s2){
    int n = s1.length();
    string result = "";
    for(int i=0; i<n; i++){
        if(s1[i]==s2[i]) result += '0';
        else result += '1';
    }
    return result;
}
int main(){
    string s1;
    string s2;
    cout<<"enter string s1: "<<endl;
    cin>>s1;
    cout<<"enter string s2: "<<endl;
    cin>>s2;
    cout<<"result of and operation"<<ANDop(s1,s2)<<endl;
    cout<<"result of or operation"<<ORop(s1,s2)<<endl;
    cout<<"result of xor operation"<<XORop(s1,s2)<<endl;
}