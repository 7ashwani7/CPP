#include <iostream>
using namespace std;

class Node {
public:
    int val;
    Node* prev;
    Node* next;

    Node(int val) {
        this->val = val;
        prev = NULL;
        next = NULL;
    }
};

void display(Node* head) {
    Node* temp = head;

    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }

    cout << endl;
}
void displayRev(Node* tail) {
    Node* temp = tail;

    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->prev;
    }

    cout << endl;
}

int main() {
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);

    a->next = b;
    b->prev = a;

    b->next = c;
    c->prev = b;

    c->next = d;
    d->prev = c;

    cout << "Normal: ";
    display(a);

    cout << "Reverse: ";
    displayRev(d);

    return 0;
}