#include <iostream>
#include <cstdlib>   
#include <ctime>
using namespace std;
int main() {
    int n;
    cout << "Enter the number of random numbers: ";
    cin >> n;
    int arr[n];
    srand(time(0));
    for (int i = 0; i < n; i++) {
        arr[i] = rand();  // Generates a random number
    }
    cout << "Random numbers: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
