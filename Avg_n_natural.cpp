#include <iostream>
using namespace std;
int main() {
    int n;
    int sum = 0;
    cout << "Enter the value of n: ";
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        sum += i;
    }
    double average = static_cast<double>(sum) / n;
    cout << "The average of the first " << n << " natural numbers is: " << average << endl;
    return 0;
}
