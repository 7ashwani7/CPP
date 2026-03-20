#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
};
void printList(Node* n) {
    while (n != nullptr) {
     cout << n->data << " ";
        n = n->next;
    }
    cout <<endl;
}

int main() {
    Node* head = nullptr;
    Node* second = nullptr;
    Node* third = nullptr;
    head = new Node();
    second = new Node();
    third = new Node();

    head->data = 1;       
    head->next = second;  

    second->data = 2;  
    second->next = third;

    third->data = 3;      
    third->next = nullptr;

    cout << "Linked list contains: ";
    printList(head);

    Node* current = head;
    Node* nextNode = nullptr;
    while (current != nullptr) {
        nextNode = current->next;
       delete current;
       current = nextNode;
    }

    return 0;
}
