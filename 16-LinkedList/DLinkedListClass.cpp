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

class DoublyLinkedList {
public:
    Node* head;
    Node* tail;
    int size;

    DoublyLinkedList() {
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
            newNode->prev = tail;
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
            head->prev = newNode;
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
        newNode->prev = temp;

        temp->next->prev = newNode;
        temp->next = newNode;

        size++;
    }

    int getFirst() {
        return head ? head->val : -1;
    }

    int getLast() {
        return tail ? tail->val : -1;
    }

    int get(int idx) {
        if (idx < 0 || idx >= size) return -1;

        Node* temp = head;
        for (int i = 0; i < idx; i++) {
            temp = temp->next;
        }

        return temp->val;
    }

    bool search(int val) {
        Node* temp = head;

        while (temp) {
            if (temp->val == val) return true;
            temp = temp->next;
        }

        return false;
    }

    bool isEmpty() {
        return size == 0;
    }

    int length() {
        return size;
    }

    // Forward Traversal
    void displayForward() {
        Node* temp = head;

        while (temp) {
            cout << temp->val << " ";
            temp = temp->next;
        }

        cout << endl;
    }

    // Backward Traversal
    void displayBackward() {
        Node* temp = tail;

        while (temp) {
            cout << temp->val << " ";
            temp = temp->prev;
        }

        cout << endl;
    }
};

int main() {
    DoublyLinkedList dll;

    dll.add(10);
    dll.add(20);
    dll.add(30);

    dll.addFirst(5);
    dll.addAt(2, 15);

    cout << "Forward: ";
    dll.displayForward();

    cout << "Backward: ";
    dll.displayBackward();

    cout << "First: " << dll.getFirst() << endl;
    cout << "Last: " << dll.getLast() << endl;
    cout << "At index 3: " << dll.get(3) << endl;
    cout << "Size: " << dll.length() << endl;
    cout << "Search 20: " << dll.search(20) << endl;

    return 0;
}