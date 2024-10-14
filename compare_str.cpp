#include <iostream>
#include <string>
using namespace std;
int main() {
    string str1, str2;
    cout << "Enter the first string: ";
    cin>>str1;
    cout << "Enter the second string: ";
    cin>>str2;
    if (str1 == str2) {
        cout << "The strings are equal." <<endl;
    } else {
        cout << "The strings are not equal." <<endl;
    }
    return 0;
}