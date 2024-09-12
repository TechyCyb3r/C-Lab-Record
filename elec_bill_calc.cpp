#include<iostream>
using namespace std;
int main(){
    int unit,calc;
    cout<<"Enter your electricity bill unit: ";
    cin>>unit;
    if(unit<=100){
        calc= unit*10;
        cout<<"Your electricity bill charge is: Rs. "<<calc;
    }
    else if(unit<=200){
        calc= unit*15;
        cout<<"Your electricity bill charge is: Rs. "<<calc;
    }
    else if(unit<=300){
        calc= unit*20;
        cout<<"Your electricity bill charge is: Rs. "<<calc;
    }
    else{
        calc= unit*25;
        cout<<"Your electricity bill charge is: Rs. "<<calc;
    }
        
    return 0;
}