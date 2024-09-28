#include<iostream>
using namespace std;
int count = 0;
class Test{
    public:
    Test(){
        count ++;
        cout<<"No of object created: "<<count<<endl;
    }
    ~Test(){
        cout<<"NO of object destroyed: "<<count<<endl;
        count --;
    }
};
int main(){
    cout<<"Enter main: "<<endl;
    Test A1, A2, A3, A4;
    {
        cout<<"Enter in block 1 "<<endl;
        Test A5;
    }
    {
        cout<<"Enter in block 2 "<<endl;
        Test A6;
    }
    cout<<"Re enter in main block"<<endl;
    return 0;
}