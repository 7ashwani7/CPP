#include <iostream>
using namespace std;

class Node {
public:
    int val;
    Node* next;

    Node(int val) {
        this->val = val;
        next = NULL;
    }
};

class Stack {
public:
    Node* top;
    int size;

    Stack() {
        top = NULL;
        size = 0;
    }

    void push(int x) {
        Node* newNode = new Node(x);
        newNode->next = top;
        top = newNode;
        size++;
    }

    void pop() {
        if (top == NULL) {
            cout << "Stack is empty" << endl;
            return;
        }

        Node* temp = top;
        top = top->next;
        delete temp;
        size--;
    }

    int peek() {
        if (top == NULL) {
            cout << "Stack is empty" << endl;
            return -1;
        }

        return top->val;
    }

    bool empty() {
        return size == 0;
    }

    int getSize() {
        return size;
    }

    void display() {
        Node* temp = top;

        while (temp != NULL) {
            cout << temp->val << " ";
            temp = temp->next;
        }

        cout << endl;
    }
};

int main() {
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    s.display();
    s.pop();
    s.display();
    cout << "Size: " << s.getSize() << endl;
    cout << "Top: " << s.peek() << endl;

    return 0;
}