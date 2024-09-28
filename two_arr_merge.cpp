#include <iostream>
using namespace std;
void mergeArrays(int arr1[], int size1, int arr2[], int size2, int merged[]) {
    for (int i = 0; i < size1; i++) {
        merged[i] = arr1[i];
    }
    for (int i = 0; i < size2; i++) {
        merged[size1 + i] = arr2[i];
    }
}
void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main() {
    int arr1[] = {5, 3, 7, 1};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int arr2[] = {4, 8, 6, 2};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int mergedSize = size1 + size2;
    int merged[mergedSize];
    mergeArrays(arr1, size1, arr2, size2, merged);
    bubbleSort(merged, mergedSize);
    cout << "Merged and sorted array: ";
    for (int i = 0; i < mergedSize; i++) {
        cout << merged[i] << " ";
    }
    return 0;
}
