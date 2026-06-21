#include <iostream>
using namespace std;

class Node{
public:
    int val;
    Node* next;

    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};
void displayR(Node* head){
    if(head == NULL) return;
    cout << head->val << " ";
    displayR(head->next);
}
void displayReverse(Node* head){
    if(head == NULL) return;
    displayReverse(head->next);
    cout << head->val << " ";
}
int main(){
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    a->next = b;
    b->next = c;    
    c->next = d;
    displayR(a);
    cout << endl;
    displayReverse(a);
}