#include <iostream>
using namespace std;
int main() {
    int a, b, sum;
    int *ptrA, *ptrB;
    cout << "Enter two integers: ";
    cin >> a >> b;
    ptrA = &a;
    ptrB = &b;
    sum = *ptrA + *ptrB;    cout << "Sum: " << sum <<endl;
    return 0;
}