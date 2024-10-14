#include<iostream>
using namespace std;

class Demo {
    int real, img;

public:
    Demo(int r = 0, int i = 0) : real(r), img(i) {}

    // Overload + operator
    Demo operator+(const Demo& obj) {
        Demo temp;
        temp.real = real + obj.real;
        temp.img = img + obj.img;
        return temp;
    }

    void display() {
        cout << real << " + " << img << "i" << endl;
    }
};

int main() {
    Demo d1(3, 4), d2(1, 2);
    Demo d3 = d1 + d2;
    d3.display();
    return 0;
}