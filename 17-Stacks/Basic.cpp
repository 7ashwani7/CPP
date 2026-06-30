#include <iostream>
#include <stack>
using namespace std;
int main() {
    stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    cout << "Top: " << s.top() << endl; // 40
    s.pop();
    cout << "Top after pop: " << s.top() << endl; // 30

    return 0;
}
