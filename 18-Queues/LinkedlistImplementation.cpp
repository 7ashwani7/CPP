#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

class Queue {
    Node* frontNode;
    Node* rearNode;
    int cnt;

public:
    Queue() {
        frontNode = rearNode = NULL;
        cnt = 0;
    }

    void push(int x) {
        Node* newNode = new Node(x);

        if (rearNode == NULL) {
            frontNode = rearNode = newNode;
        } else {
            rearNode->next = newNode;
            rearNode = newNode;
        }

        cnt++;
    }

    void pop() {
        if (empty()) {
            cout << "Queue Underflow\n";
            return;
        }

        Node* temp = frontNode;
        frontNode = frontNode->next;

        if (frontNode == NULL) {
            rearNode = NULL;
        }

        delete temp;
        cnt--;
    }

    int front() {
        if (empty()) {
            return -1;
        }

        return frontNode->data;
    }

    int size() {
        return cnt;
    }

    bool empty() {
        return cnt == 0;
    }

    void display() {
        if (empty()) {
            cout << "Queue is Empty\n";
            return;
        }

        Node* temp = frontNode;

        while (temp) {
            cout << temp->data << " ";
            temp = temp->next;
        }

        cout << endl;
    }
};

int main() {
    Queue q;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);

    cout << "Queue: ";
    q.display();

    cout << "Front: " << q.front() << endl;
    cout << "Size: " << q.size() << endl;

    q.pop();

    cout << "After Pop: ";
    q.display();

    cout << "Front: " << q.front() << endl;

    return 0;
}