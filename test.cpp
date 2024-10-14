#include<iostream>
using namespace std;

class Demo {
    int real, img;
public:
    Demo(int r = 0, int i = 0) {
        real = r;
        img = i;
    }
    void Display() {
        cout << real << " +  i" << img << endl;
    }
    friend Demo operator+(Demo const& a, Demo const& b);
};
Demo operator+(Demo const& a, Demo const& b) {
    Demo result;
    result.real = a.real + b.real;
    result.img = a.img + b.img;
    return result;
}
int main() {
    Demo d1(5, 7), d2(2, 9);
    Demo d3 = d1 + d2;
    d3.Display();
    return 0;
}
