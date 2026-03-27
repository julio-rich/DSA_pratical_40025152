#include <iostream>
#include <algorithm>
using namespace std;

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void bubbleSort(int arr[], int n) {
    for (int i = n-1; i >= 0; i--) {
        for (int j = 1; j <= i; j++) {
            if (arr[j-1] > arr[j]) {
                swap(arr[j], arr[j-1]);
            }
        }
        
        cout << "After Pass " << n - i << ": ";
        printArray(arr, n);
    }
}

int main() {
    int arr[] = {64, 25, 12, 22, 11, 2, 90, 7, 33, 78};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "----Bubble Sort----" << endl;
    cout << "Original array: ";
    printArray(arr, n);

    bubbleSort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}