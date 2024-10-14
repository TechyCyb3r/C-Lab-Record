#include<iostream>
#include<string.h>
using namespace std;
int main(){
    string str1, str2, str3;
    cout<<"Enter any string/word: ";
    cin>>str1;
    cout<<"Enter any string/word: ";
    cin>>str2;
    str3= str1 + str2;
    cout<<"Concat string is : "<<str3;
    return 0;
}