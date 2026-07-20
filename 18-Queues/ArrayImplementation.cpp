#include <iostream>
using namespace std;

class Queue {
    int *arr;
    int frontIdx;
    int rearIdx;
    int cnt;
    int cap;

public:
    Queue(int size) {   // Constructor
        cap = size;
        arr = new int[cap];
        frontIdx = 0;
        rearIdx = -1;
        cnt = 0;
    }

    void push(int x) {
        if (cnt == cap) {
            cout << "Queue Overflow\n";
            return;
        }

        rearIdx++;
        arr[rearIdx] = x;
        cnt++;
    }

    void pop() {
        if (empty()) {
            cout << "Queue Underflow\n";
            return;
        }

        frontIdx++;
        cnt--;
    }

    int front() {
        if (empty()) {
            return -1;
        }
        return arr[frontIdx];
    }

    int size() {
        return cnt;
    }

    bool empty() {
        return cnt == 0;
    }

    void display() {
        if (empty()) {
            cout << "Queue is Empty\n";
            return;
        }

        for (int i = frontIdx; i <= rearIdx; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    ~Queue() {   // Destructor
        delete[] arr;
    }
};

int main() {
    Queue q(10);

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);

    cout << "Queue: ";
    q.display();

    cout << "Front: " << q.front() << endl;
    cout << "Size: " << q.size() << endl;

    q.pop();

    cout << "After Pop: ";
    q.display();

    return 0;
}