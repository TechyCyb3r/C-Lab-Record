#include <iostream>
using namespace std;
class Complex {
private:
    double real;
    double imag;
public:
    Complex(double r = 0, double i = 0) : real(r), imag(i) {}
    void read() {
        cout << "Enter real part: ";
        cin >> real;
        cout << "Enter imaginary part: ";
        cin >> imag;
    }
    void display() const {
        cout << real << " + " << imag << "i" << endl;
    }
    Complex add(const Complex& other) const {
        return Complex(real + other.real, imag + other.imag);
    }
    Complex subtract(const Complex& other) const {
        return Complex(real - other.real, imag - other.imag);
    }
};

int main() {
    Complex c1, c2, sum, diff;
    cout << "Enter first complex number:\n";
    c1.read();
    cout << "Enter second complex number:\n";
    c2.read();
    sum = c1.add(c2);
    diff = c1.subtract(c2);
    cout << "First complex number: ";
    c1.display();
    cout << "Second complex number: ";
    c2.display();
    cout << "Sum: ";
    sum.display();
    cout << "Difference: ";
    diff.display();
    return 0;
}