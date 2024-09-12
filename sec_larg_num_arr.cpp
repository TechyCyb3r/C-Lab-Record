#include <iostream>
using namespace std; 
int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    if (n < 2) {
        cout << "Array must have at least two elements!" << endl;
        return 1;
    }
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int firstLargest = arr[0], secondLargest = -1;
    for (int i = 1; i < n; i++) {
        if (arr[i] > firstLargest) {
            secondLargest = firstLargest;
            firstLargest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != firstLargest) {
            secondLargest = arr[i];
        }
    }
    if (secondLargest == -1) {
        cout << "There is no second largest number." << endl;
    } else {
        cout << "The second largest number is: " << secondLargest << endl;
    }
    return 0;
}
