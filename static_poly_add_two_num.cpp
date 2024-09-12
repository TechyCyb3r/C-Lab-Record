#include <iostream>
using namespace std;
template <typename T1, typename T2>
auto add(T1 a, T2 b) -> decltype(a + b) {
    return a + b;
}
int main() {
    int intVal;
    double doubleVal;
    char charVal;
    cout << "Enter an integer value: ";
    cin >> intVal;
    cout << "Enter a double value: ";
    cin >> doubleVal;
    cout << "Enter a character (which will be treated as its ASCII value): ";
    cin >> charVal;
    cout << "Addition of integer and double: " << add(intVal, doubleVal) << endl;
    cout << "Addition of integer and character: " << add(intVal, charVal) << endl;
    cout << "Addition of double and character: " << add(doubleVal, charVal) << endl;
    return 0;
}