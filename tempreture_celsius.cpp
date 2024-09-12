#include<iostream>
using namespace std;
int main(){
    double fahrenheit, celsius;
    cout<<"Enter Temperature in Fahrenheit: ";
    cin>>fahrenheit;
    celsius = (fahrenheit-32)*5.0/9.0;
    cout<<"Temperature in celsius: "<<celsius<<endl;
    return 0;
} 