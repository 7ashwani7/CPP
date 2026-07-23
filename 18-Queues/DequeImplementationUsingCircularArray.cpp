#include <iostream>
using namespace std;

class Deque {
    int *arr;
    int front, rear;
    int cap;
    int cnt;

public:
    Deque(int size) {
        cap = size;
        arr = new int[cap];
        front = -1;
        rear = -1;
        cnt = 0;
    }

    bool isEmpty() {
        return cnt == 0;
    }

    bool isFull() {
        return cnt == cap;
    }

    void addFront(int x) {
        if (isFull()) {
            cout << "Deque Overflow\n";
            return;
        }

        if (isEmpty()) {
            front = rear = 0;
        } else {
            front = (front - 1 + cap) % cap;
        }

        arr[front] = x;
        cnt++;
    }

    void addRear(int x) {
        if (isFull()) {
            cout << "Deque Overflow\n";
            return;
        }

        if (isEmpty()) {
            front = rear = 0;
        } else {
            rear = (rear + 1) % cap;
        }

        arr[rear] = x;
        cnt++;
    }

    void deleteFront() {
        if (isEmpty()) {
            cout << "Deque Underflow\n";
            return;
        }

        if (cnt == 1) {
            front = rear = -1;
        } else {
            front = (front + 1) % cap;
        }

        cnt--;
    }

    void deleteRear() {
        if (isEmpty()) {
            cout << "Deque Underflow\n";
            return;
        }

        if (cnt == 1) {
            front = rear = -1;
        } else {
            rear = (rear - 1 + cap) % cap;
        }

        cnt--;
    }

    int getFront() {
        if (isEmpty()) return -1;
        return arr[front];
    }

    int getRear() {
        if (isEmpty()) return -1;
        return arr[rear];
    }

    int size() {
        return cnt;
    }

    void display() {
        if (isEmpty()) {
            cout << "Deque is Empty\n";
            return;
        }

        int i = front;

        for (int k = 0; k < cnt; k++) {
            cout << arr[i] << " ";
            i = (i + 1) % cap;
        }

        cout << endl;
    }

    ~Deque() {
        delete[] arr;
    }
};

int main() {
    Deque dq(5);

    dq.addRear(10);
    dq.addRear(20);
    dq.addFront(30);
    dq.addRear(40);
    dq.addFront(50);

    cout << "Deque: ";
    dq.display();

    cout << "Front: " << dq.getFront() << endl;
    cout << "Rear: " << dq.getRear() << endl;
    cout << "Size: " << dq.size() << endl;

    dq.deleteFront();
    dq.deleteRear();

    cout << "After Deletions: ";
    dq.display();

    return 0;
}