#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter any integer number: ";
    cin>>a;
    cout<<"Enter any integer number: ";
    cin>>b;
    a = a+b;
    b = a -b;
    a = a-b;
    cout<<a<<" ";
    cout<<b;
    return 0;    
}