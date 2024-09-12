#include <iostream>
using namespace std;
double calculateVolume(double length = 1, double width = 1, double height = 1) {
    return length * width * height;  // Volume = length * width * height
}
int main() {
    double length, width, height;
    char choice;
    cout << "Do you want to enter dimensions for the cuboid? (y/n): ";
    cin >> choice;
    if (choice == 'y' || choice == 'Y') {
        cout << "Enter the length of the cuboid: ";
        cin >> length;
        cout << "Enter the width of the cuboid: ";
        cin >> width;
        cout << "Enter the height of the cuboid: ";
        cin >> height;
        cout << "The volume of the cuboid is: " << calculateVolume(length, width, height) << endl;
    } else {
        cout << "Using default values (1 for each dimension)." << endl;
        cout << "The volume of the cuboid is: " << calculateVolume() << endl;
    }
    return 0;
}