#include <iostream>
using namespace std;

struct Node {
    int data;
    int size;
    Node *next;
    Node* prev;
    Node* Head = nullptr;
};

Node* Tail = nullptr;  // Added global Tail pointer to fix undefined identifier error

bool IsEmpty(int size){
    if (size == 0){
        return true;
    } else {
        return false;
    }
}

int Get(int position, Node* Head){
    Node* h = Head;
    int count = 1;
    while (count < position){
        h = h->next;
        count++;
    }
    return h->data;
}

int ListSize(int size){
    return size;
}

int PositionOf(int x, Node* Head, int size){
    Node* h = Head;
    int count = 1;
    while (count <= ListSize(size)){
        if (h->data == x){
            return count;
        }
        h = h->next;
        count++;
    }
    return -1;
}

void Insert( int position, int x, Node* &Head, int &size){
    Node* newNode = new Node();
    newNode->data = x;
    newNode->next = nullptr;
    if (position == 1){
        newNode->next = Head;
        Head->prev = newNode;
        Head = newNode;
        size++;
    } else if(position == (size + 1)){
        Tail->next = newNode;
        newNode->prev = Tail;
        Tail = newNode;
        size++;
    } else {
        int count = 1;
        Node* h = Head;
        while (count < position - 1){
            h = h->next;
            count++;
        }
        newNode->next = h->next;
        newNode->prev = h;
        h->next->prev = newNode;
        h->next = newNode;
        size++;
    }
}

void Delete(int position, Node* &Head, int &size){
    if (position == 1) {
        Head = Head->next;
        Head->prev = nullptr;
        size--;
    } else if (position == size) {
        Tail = Tail->prev;
        Tail->next = nullptr;
        size--;
    } else {
        int count = 1;
        Node* h = Head;
        while (count < position - 1){
            h = h->next;
            count++;
        }
        h->next = h->next->next;
        h->next->prev = h;
        size--;
    }
}

void Output(Node* Head){
    Node* h = Head;
    while (h != nullptr){
        cout << h->data << endl;
        h = h->next;
    }
}
