#include <iostream>
using namespace std;
int power(int x, int y) {
    if (y == 0)
        return 1;
    return x * power(x, y - 1);
}
int main() {
    int x, y;
    cout << "Enter base (x): ";
    cin >> x;
    cout << "Enter exponent (y): ";
    cin >> y;
    int result = power(x, y);
    cout << x << " ^ " << y << " = " << result << endl;
    return 0;
}