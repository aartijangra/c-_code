/*Raju is developing a program for a language translation app. Users can input a sentence in English, 
and your program will dynamically allocate memory to create a reversed version of the sentence in English.
 The reversed sentence will be displayed as the translation for the user.

Write a program that takes a string as input and dynamically allocates memory to create a reversed version
 of the string. The program should implement a function called reverseString that accepts the input string, 
 dynamically allocates memory for the reversed string, and returns a pointer to the reversed string. 
 Finally, print the reversed version of that given sentence.

Note: This kind of question will help in clearing Amcat recruitment.

Input format:The input contains a single line of text containing a sentence in English. The sentence can contain alphanumeric characters, punctuation, and spaces.

Output format:
The output displays the reversed version of the sentence in English.
Refer to the sample output for formatting specifications.

Code constraints:
The length of the input sentence will not exceed 1000 characters.
The sentence can contain any printable ASCII characters,
including spaces, punctuation, and digits.
The dynamic memory allocation should be used to create the reversed string.Sample test cases:
Input 1 :
Hello 9876543210, how are you?
output 1:
Reversed string: ? uoy era woh ,013456789 olleH

Note:
The program will be evaluated only after the "Subrhit Code" is clicked.
Extra spaces and new line characters in the program output will result in the failure of the test case.*/

#include<iostream>
#include<cstring>
using namespace std;

char *Reversedstr(char *inputstr){
    int length=strlen(inputstr);
    char *revstring = new char[length + 1];

    for(int i=length-1;i>=0;i--){
        revstring[length - i - 1]=inputstr[i];
    }
    revstring[length]='\0';
    return revstring;

}

int main(){
    char inputstr[1001];
    cin.getline(inputstr , 1000);
    char *revstring = Reversedstr(inputstr);
    cout<<"reversed string : "<<revstring<<endl;

    delete[] revstring;
    return 0;
}