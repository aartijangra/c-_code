#include<iostream>
#include <algorithm>
using namespace std;
bool anagram(string s1, string s2){
    if(s1.length()!=s2.length()){
        return false;
    }
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    if(s1==s2) return true;
    return false;
    
}
int main(){
    string s1;
    string s2;
    cout<<"enter the strings: "<<endl;
    cin>>s1;
    cin>>s2;
    cout<<anagram(s1, s2)<<endl;
    return 0;
}