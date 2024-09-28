#include<iostream>
using namespace std;
int main(){
    float marks;
    cout<<"Enter your percentage: ";
    cin>> marks;
    if(marks>=90){
        cout<<"A++ Rank";
    } else if(marks>=80){
        cout<<"A Rank";
    }else if(marks>=70){
        cout<<"A- Rank";
    }else if(marks>=60){
        cout<<"B Rank";
    }else if(marks>=50){
        cout<<"B- Rank";
    }else if(marks>=40){
        cout<<"Only Pass";
    }else if(marks>=30){
        cout<<"Fail";
    }else{
        cout<<"Dont be over smart! ";
    }
    return 0;
}