#include<iostream>
using namespace std;

bool Isempty(int size);
int ListSize(int arr[], int size);
int Get(int index, int arr[], int size);
int IndexOf(int x, int arr[], int size);
void Delete(int index, int arr[], int &size);
void Insert(int index, int x, int arr[], int &size);
void Output(int arr[], int size);

int main(){
    int arr[5]={10, 20, 30, 40, 50};
    int size = ListSize(arr, 5);

    if(IsEmpty(size)){
        cout <<"Array is empty" << endl;
    } else {
        cout << "Array is not empty" << endl;
    }

    cout << "Element at index 2: " << Get(2, arr, size) << endl;
    cout << "Index of 30 " << IndexOf(30, arr, size) << endl;

     Insert(2, 25, arr, size);

    cout << "Array after insertion: " << endl;
    Output(arr, size);

    Delete(3, arr, size);
    
    cout << "Array after deletion: " << endl;
    Output(arr, size);

    return 0;
}
    
bool IsEmpty(int size){
    return (size == 0);
}

int ListSize(int arr[], int n){
    int size = 0;
    for(int i = 0; i < n; i++ ){
        if (arr[i] != 0){
            size++;
        }
    }
    return size;
}

int Get(int index, int arr[], int size){
    if (arr[index] != 0){
        cout << "Wrong Index" << endl;
        return -1;
    }
    return arr[index];
}

int IndexOf(int x, int arr[], int size){
    for (int i = 0; i < size; i++) {
        if (arr[i] == x) {
            return i;
        }
    }
    return -1;
}
void Delete(int index, int arr[], int size){
    if (index == size - 1){
        arr[index] = 0;
        size--;
    } else {
        for (int i = index; i < size -1; i++){
            arr[i] = arr[i + 1];
        }
        size--;
    }
}

void Insert(int index, int x, int arr[], int size){
    if (index == size){
        arr[index] = x;
        size++;
    } else {
        for (int i = size -1; i >= index; i--){
            arr[i + 1] = arr[i];
        }
        arr[index] = x;
        size++;
    }
}

void Output(int arr[], int size){
    for (int i = 0; i < size; i++){
        cout << arr[i] << endl;
    }
}
