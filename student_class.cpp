#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int rollNumber;
    float marks;
public:
    Student(const string& name, int rollNumber, float marks)
        : name(name), rollNumber(rollNumber), marks(marks) {}
    void displayData() const {
        cout << "\nStudent's Information:\n";
        cout << "Name: " << name << "\n";
        cout << "Roll Number: " << rollNumber << "\n";
        cout << "Marks: " << marks << "\n";
    }
};
int main() {
    Student student("John Doe", 123, 95.5);
    student.displayData();
    return 0;
}
