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
    void deleteAtHead(){
        if(head == NULL) return;
        Node* temp = head;
        head = head->next;
        delete temp;
        size--;
    }
    void deleteAtTail(){
        if(head == NULL) return;
        if(head->next == NULL){
            delete head;
            head = NULL;
            tail = NULL;
            size--;
            return;
        }
        Node* temp = head;
        while(temp->next != tail){
            temp = temp->next;
        }
        delete tail;
        tail = temp;
        tail->next = NULL;
        size--;
    }
    void deleteAtIndex(int index){
        if(index < 0 || index >= size){
            cout << "Invalid index" << endl;
            return;
        } 
        if(index == 0){
            deleteAtHead();
            return;
        }
        if(index == size-1){
            deleteAtTail();
            return;
        }
        Node* temp = head;
        for(int i=0; i<index-1; i++){
            temp = temp->next;
        }
        Node* toDelete = temp->next;
        temp->next = temp->next->next;
        delete toDelete;
        size--;
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
    ll.add(50);
    ll.add(60);
    ll.add(70);
    ll.display();
    cout << endl;
    ll.deleteAtHead();
    ll.display();
    cout << endl;
    ll.deleteAtTail();
    ll.display();
    cout << endl;
    ll.deleteAtIndex(2);
    ll.display();
}