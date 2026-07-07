#include <iostream>
#include <vector>
using namespace std;

class Stack {
public:
    vector<int> v;

    void push(int x) {
        v.push_back(x);
    }

    void pop() {
        if (v.empty()) {
            cout << "Stack is empty" << endl;
            return;
        }

        v.pop_back();
    }

    int top() {
        if (v.empty()) {
            cout << "Stack is empty" << endl;
            return -1;
        }

        return v.back();
    }

    bool empty() {
        return v.empty();
    }

    int size() {
        return v.size();
    }

    void display() {
        for (int i = v.size() - 1; i >= 0; i--) {
            cout << v[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Stack s;

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