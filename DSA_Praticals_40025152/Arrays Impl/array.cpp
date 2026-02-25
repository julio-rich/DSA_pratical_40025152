#include<iostream>
using namespace std;

int main(){
    int arr[5]={10, 20, 30, 40, 50};

    // access Elements
    cout << "First element: " << arr[0] << endl;

    // modify element
    arr[2] = 100;

    // traverse array 
    for(int i=0; i<5; i++){
        cout << arr[i] << "\n";
    }

    return 0;
}