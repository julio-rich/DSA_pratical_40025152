#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

class Queue {
private:
    Node *front, *rear;

public:
    Queue() {
        front = rear = NULL;
    }
bool IsEmpty() {
        if (front == NULL) {
            return true;
        } else {
            return false;
        }
    }

    int size() {
        int count = 0;
        Node* temp = front;
        while (temp != NULL) {
            count++;
            temp = temp->next;
        }
        return count;
    }   

    int frontElement() {
        if (front != NULL) {
            return front->data;
        } else {
            cout << "Queue is empty\n";
            return -1; 
        }
    }

    int backElement() {
        if (rear != NULL) {
            return rear->data;
        } else {
            cout << "Queue is empty\n";
            return -1; 
        }
    }

    void enqueue(int x) {
        Node* temp = new Node();
        temp->data = x;
        temp->next = NULL;

        if (rear == NULL) {
            front = rear = temp;
        } else {
            rear->next = temp;
            rear = temp;
        }
        cout << x << " inserted\n";
    }

    void dequeue() {
        if (front == NULL) {
            cout << "Queue Underflow\n";
            return;
        }

        Node* temp = front;
        cout << temp->data << " removed\n";
        front = front->next;

        if (front == NULL)
            rear = NULL;

        delete temp;
    }

    void display() {
        Node* temp = front;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

};
