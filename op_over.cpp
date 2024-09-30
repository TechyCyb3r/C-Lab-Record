#include<iostream>
using namespace std;
class Test{
    int a=10,b=-20,c=30;
    public:
    void display(){
        cout<<"a="<<a<<endl;
        cout<<"b="<<b<<endl;
        cout<<"c="<<c<<endl;
    }void friend operator -(Test &ob);
};
void operator-(Test &ob){
    ob.a=-ob.a;
    ob.b=-ob.b;
    ob.c=-ob.c;
}
int main(){
    Test obj;
    operator-(obj);
    obj.display();
    return 0;
}