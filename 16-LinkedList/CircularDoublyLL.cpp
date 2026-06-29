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
    if (head == NULL) return;

    Node* temp = head;
    do {
        cout << temp->val << " ";
        temp = temp->next;
    } while (temp != head);

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
    d->next = a;
    a->prev = d;

    display(a);

    return 0;
}