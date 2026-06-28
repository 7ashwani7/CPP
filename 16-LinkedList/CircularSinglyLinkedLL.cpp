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
    b->next = c;
    c->next = d;
    d->next = a;   // Circular link

    display(a);

    return 0;
}