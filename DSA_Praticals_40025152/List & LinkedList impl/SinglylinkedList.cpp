#include <iostream>
using namespace std;

struct Node {
    int data;
    int size;
    Node *next;
    Node* Head = nullptr;
};

bool IsEmpty(int size){
    return size == 0;
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

void Insert(int position, int x, Node* &Head, int &size){
    Node* newNode = new Node();
    newNode->data = x;
    newNode->next = nullptr;
    if (position == 1){
        newNode->next = Head;
        Head = newNode;
        size++;
    } else if (position == (size + 1)){
        Node* h = Head;
        while (h->next != nullptr){
            h = h->next;
        }
        h->next = newNode;
        size++;
    } else {
        int count = 1;
        Node* h = Head;
        while (count < position - 1){
            h = h->next;
            count++;
        }
        newNode->next = h->next;
        h->next = newNode;
        size++;
    }
}

void Delete(int position, Node* &Head, int &size){
    if (position == 1){
        Head = Head->next;
        size--;
    } else if (position == size){
        Node* h = Head;
        int count = 1;
        while (count < (position - 1)){
            h = h->next;
            count++;
        }
        h->next = nullptr;
        size--;
    } else {
        Node* h = Head;
        int count = 1;
        while (count < position - 1){
            h = h->next;
            count++;
        }
        h->next = h->next->next;
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
