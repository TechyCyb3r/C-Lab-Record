#include <iostream>
using namespace std;
struct Address {
    string street;
    string city;
    string state;
    int zipCode;
};
struct Student {
    string name;
    int age;
    Address address;
};
int main() {
    Student student = {"Himanshu Agarwal",20,{"123 Main St","Anytown","Anystate",12345}};
    cout << "\nStudent Information:\n";
    cout << "Name: " << student.name << endl;
    cout << "Age: " << student.age << endl;
    cout << "Address: " << student.address.street << ", " 
         << student.address.city << ", " 
         << student.address.state << " - " 
         << student.address.zipCode << endl;

    return 0;
}