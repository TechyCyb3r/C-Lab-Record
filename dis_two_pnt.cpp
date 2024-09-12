#include<iostream>
#include<cmath>
using namespace std;
int main(){
    float x1,y1,x2,y2,dis;
    cout<<"Enter the value of x1,x2,y1,y2"<<endl;
    cin>>x1>>x2;
    cin>>y1>>y2;
    dis = sqrt(pow((x1-x2),2)+pow((y1-y2),2));
    cout<<"Distance = " <<dis<<endl;
    return 0;
}