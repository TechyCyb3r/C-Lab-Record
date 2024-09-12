#include <iostream>
using namespace std;
void decimalToBinary(int decimal_num) {
    if (decimal_num == 0) {
        cout << "0";}
    int binary[32];
    int index = 0;
    while (decimal_num > 0) {
        binary[index] = decimal_num % 2;
        decimal_num = decimal_num / 2;
        index++;
    }
    cout << "Binary equivalent: ";
    for (int i = index - 1; i >= 0; i--)
        cout << binary[i];
    cout << endl;
}
int main() {
    int decimal_num;
    cout << "Enter a decimal number: ";
    cin >> decimal_num;
   decimalToBinary(decimal_num);
    return 0;
}
