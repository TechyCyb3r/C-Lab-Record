#include <iostream>
using namespace std;
int main()
{
    int num, i, target;
    target = 0;
    cout << "Enter a positive integer number: ";
    cin >> num;
    if (num == 0 || num == 1){
        target = 1;
    }
    for (i = 2; i < num / 2; i++)
    {
        if (num % i == 0)
        {
            target = 1;
            break;
        }
    }
    if (target == 0)
    {
        cout << num << " is a prime number.";
    }
    else
    {
        cout << num << " is composite number.";
    }
    return 0;
}