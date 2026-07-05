#include <iostream>
#include <stack>
using namespace std;

void pushAtBottom(stack<int>& s, int x) {
    if (s.empty()) {
        s.push(x);
        return;
    }
    int top = s.top();
    s.pop();
    pushAtBottom(s, x);
    s.push(top);
}
void reverseStack(stack<int>& s) {
    if (s.empty()) return;
    int top = s.top();
    s.pop();
    reverseStack(s);
    pushAtBottom(s, top);
}
void display(stack<int> s) {
    if (s.empty()) {
        cout << endl;
        return;
    }
    int top = s.top();
    s.pop();
    display(s);
    cout << top << " ";
}
int main() {
    stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    cout << "Original: ";
    display(s);

    reverseStack(s);

    cout << "\nReversed: ";
    display(s);

    return 0;
}