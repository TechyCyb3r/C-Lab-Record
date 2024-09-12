#include<iostream>
using namespace std;
class Student{
    private:
    char name[20];
    int age;
    public:
    void getdata();
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age;
    }
};
void Student:: getdata(){
    cout<<"Enter the name and age of student: ";
    cin>>name;
    cin>>age;
}
int main(){
    Student s1;
    s1.getdata();
    s1.display();
    return 0;
}