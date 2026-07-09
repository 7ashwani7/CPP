#include <iostream>
#include <stack>
using namespace std;

int solve(int a, int b, char op) {
    if (op == '+') return a + b;
    if (op == '-') return a - b;
    if (op == '*') return a * b;
    if (op == '/') return a / b;
    return 0;
}

int evaluatePostfix(string s) {
    stack<int> st;

    for (char ch : s) {
        if (isdigit(ch)) {
            st.push(ch - '0');
        }
        else {
            int b = st.top(); st.pop();
            int a = st.top(); st.pop();

            st.push(solve(a, b, ch));
        }
    }

    return st.top();
}

int main() {
    string exp = "23*54*+9-";

    cout << evaluatePostfix(exp) << endl;

    return 0;
}