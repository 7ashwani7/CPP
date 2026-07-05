#include <iostream>
using namespace std;

class Stack {
public:
    int arr[100];
    int t;
    int s;

    Stack(int s) {
        this->s = s;
        t = -1;
    }

    void push(int x) {
        if (t == s - 1) {
            cout << "Stack Overflow" << endl;
            return;
        }

        arr[++t] = x;
    }

    void pop() {
        if (t == -1) {
            cout << "Stack Underflow" << endl;
            return;
        }

        t--;
    }

    int top() {
        if (t == -1) {
            cout << "Stack is Empty" << endl;
            return -1;
        }

        return arr[t];
    }

    bool empty() {
        return t == -1;
    }

    int size() {
        return t + 1;
    }

    void display() {
        for (int i = t; i >= 0; i--) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Stack s(5);

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    s.display();

    s.pop();

    s.display();

    cout << "Top: " << s.top() << endl;
    cout << "Empty: " << s.empty() << endl;
    cout << "Size: " << s.size() << endl;

    return 0;
}