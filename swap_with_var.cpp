#include<iostream>
using namespace std;
int main(){
    int a,b,temp;
    cout<<"Enter any integer number: ";
    cin>>a;
    cout<<"Enter any integer number: ";
    cin>>b;
    cout<<"Without Swap Values: "<<a<<" "<<b<<endl;
    temp = a;
    a =b;
    b =temp;
    cout<<"Swap values: "<<a<<" "<<b;
    return 0;
}