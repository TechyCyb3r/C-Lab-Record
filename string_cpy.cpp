#include <iostream>
#include <cstring>
using namespace std;
int main() {
    const char* original = "Hello, World!";
    size_t length = strlen(original) + 1;
    char* copy = new char[length];
    strcpy(copy, original);
    cout << "Original: " << original << endl;
    cout << "Copy: " << copy << endl;
    delete[] copy;
    return 0;
}