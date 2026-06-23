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
class LinkedList{
public:
    Node* head = NULL;
    Node* tail = NULL;
    int size=0;
    
    void add(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = newNode;
            tail = newNode;
        }else{
            tail->next = newNode;
            tail = newNode;
        }
        size++;
    }
    void insertAtHead(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = newNode;
            tail = newNode;
        }else{
            newNode->next = head;
            head = newNode;
        }
        size++;
    }
    void insertAtTail(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = newNode;
            tail = newNode;
        }else{
            tail->next = newNode;
            tail = newNode;
        }
        size++;
    }
    void addAtIndex(int index, int val){
        if(index < 0 || index > size){
            cout << "Invalid index" << endl;
            return;
        } 
        if(index == 0){
            insertAtHead(val);
            return;
        }
        if(index == size){
            insertAtTail(val);
            return;
        }
        Node* newNode = new Node(val);
        Node* temp = head;
        for(int i=0; i<index-1; i++){
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
        size++;
    }
    void display(){
        Node* temp = head;
        while(temp != NULL){
            cout << temp->val << " ";
            temp = temp->next;
        }
    }

};
int main(){
    LinkedList ll;
    ll.add(10);
    ll.add(20);
    ll.add(30);
    ll.add(40);
    ll.display();
    cout << endl;
    ll.insertAtHead(50);
    ll.insertAtHead(60);
    ll.display();
    cout << endl;
    ll.insertAtTail(70);
    ll.insertAtTail(80);
    ll.display();
    cout << endl;
    ll.addAtIndex(2, 90);
    ll.display();
}