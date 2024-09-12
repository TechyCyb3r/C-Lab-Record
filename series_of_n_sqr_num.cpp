#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int num, sum =0;
    cout<<"Enter the number of elemnt: ";
    cin>>num;
    for(int i=1;i<=num;i++){
        sum += ((pow(i,i))/i);
    }
    cout<<"Sum of series: "<<sum;
    return 0;
}