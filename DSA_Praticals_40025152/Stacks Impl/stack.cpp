#include<iostream>
using namespace std;

class stack {
    private:
    static const int MAX = 100;
    int A[MAX];
    int top;

    public:
    stack(){
        top = -1;
    }

    bool empty(){
        return(top == -1);
    }

    int size(){
        return top + 1;
    }

    void push(int x){
        if(top == MAX-1) {
            cout <<"Stack Overflow\n";
        } else {
            A[++top] = x;
        }
    }

    int pop(){
        if (top == -1){
            cout << "Stack Underflow\n";
            return -1;
        } 
        return A[top--];
    }

    int Top() {
        if(top == -1) {
            cout << "Stack is Empty\n";
            return -1;
        }
        return A[top];
    }
};

int main() {
    stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Top: " << s.Top() << endl;
    cout << "popped: " << s.pop() << endl;
    cout << "Size: " << s.size() << endl;
    
    return 0;
}