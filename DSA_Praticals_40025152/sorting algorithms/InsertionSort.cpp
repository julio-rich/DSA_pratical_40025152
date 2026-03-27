#include <iostream>

using namespace std;

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int next = arr[i];
        int j;
        for (j = i - 1; j >= 0 && arr[j] > next; j--) {
            arr[j + 1] = arr[j];
        }
        arr[j + 1] = next;
        cout << "After Pass " << i << ": ";
        printArray(arr, n);
    }
}

int main() {
    int arr[] = {64, 25, 12, 22, 11, 2, 90, 7, 33, 78};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "----Insertion Sort----" << endl;
    cout << "Original array: ";
    printArray(arr, n);

    insertionSort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}