#include<iostream>
using namespace std;
class Test{
    public:
    Test(){
        cout<<"Enter in constructor"<<endl;
    }
    ~Test(){
        cout<<"Constructor is destroyed"<<endl;
    }
};
int main(){
    Test obj;
    return 0;
}