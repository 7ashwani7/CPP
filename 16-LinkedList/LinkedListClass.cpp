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

class LinkedList {
public:
    Node* head;
    Node* tail;
    int size;

    LinkedList() {
        head = NULL;
        tail = NULL;
        size = 0;
    }

    // Insert at end
    void add(int val) {
        Node* newNode = new Node(val);

        if (head == NULL) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }

        size++;
    }

    // Insert at beginning
    void addFirst(int val) {
        Node* newNode = new Node(val);

        if (head == NULL) {
            head = tail = newNode;
        } else {
            newNode->next = head;
            head = newNode;
        }

        size++;
    }

    // Insert at index
    void addAt(int idx, int val) {
        if (idx < 0 || idx > size) return;

        if (idx == 0) {
            addFirst(val);
            return;
        }

        if (idx == size) {
            add(val);
            return;
        }

        Node* temp = head;
        for (int i = 0; i < idx - 1; i++) {
            temp = temp->next;
        }

        Node* newNode = new Node(val);
        newNode->next = temp->next;
        temp->next = newNode;

        size++;
    }

    // Get value at index
    int get(int idx) {
        if (idx < 0 || idx >= size) return -1;

        Node* temp = head;
        for (int i = 0; i < idx; i++) {
            temp = temp->next;
        }

        return temp->val;
    }

    // Search value
    bool search(int val) {
        Node* temp = head;

        while (temp != NULL) {
            if (temp->val == val) return true;
            temp = temp->next;
        }

        return false;
    }

    // Display list
    void display() {
        Node* temp = head;

        while (temp != NULL) {
            cout << temp->val << " ";
            temp = temp->next;
        }

        cout << endl;
    }
};

int main() {
    LinkedList ll;

    ll.add(10);
    ll.add(20);
    ll.add(30);

    ll.addFirst(5);
    ll.addAt(2, 15);

    ll.display();   // 5 10 15 20 30

    cout << ll.get(3) << endl;   // 20
    cout << ll.search(15) << endl; // 1

    return 0;
}