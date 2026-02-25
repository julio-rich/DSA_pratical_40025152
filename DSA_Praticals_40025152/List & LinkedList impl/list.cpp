#include <iostream>
using namespace std;

#define SIZE 100

class List {
private:
    int arr[SIZE];
    int length;

public:
    List() {
        length = 0;
    }

    bool isEmpty() {
        return length == 0;
    }

    bool isFull() {
        return length == SIZE;
    }

    void insert(int position, int value) {
        if (isFull()) {
            cout << "List Overflow\n";
            return;
        }

        if (position < 0 || position > length) {
            cout << "Invalid Position\n";
            return;
        }

        for (int i = length; i > position; i--)
            arr[i] = arr[i - 1];

        arr[position] = value;
        length++;
    }

    void remove(int position) {
        if (isEmpty()) {
            cout << "List Underflow\n";
            return;
        }

        if (position < 0 || position >= length) {
            cout << "Invalid Position\n";
            return;
        }

        for (int i = position; i < length - 1; i++)
            arr[i] = arr[i + 1];

        length--;
    }

    void display() {
        for (int i = 0; i < length; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
};

int main() {
    List l;

    l.insert(0, 10);
    l.insert(1, 20);
    l.insert(1, 15);

    l.display();

    l.remove(1);
    l.display();

    return 0;
}