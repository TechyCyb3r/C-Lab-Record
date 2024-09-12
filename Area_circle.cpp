#include <iostream>
#include <cmath>
using namespace std;
double calculateArea(double radius) {
    return M_PI * radius * radius;  // Area = π * r^2
}
int main() {
    double radius, area;
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    area = calculateArea(radius);
    cout << "The area of the circle is: " << area << endl;
   return 0;
}
