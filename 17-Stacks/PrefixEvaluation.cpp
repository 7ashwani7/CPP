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

int evaluatePrefix(string s) {
    stack<int> st;

    for (int i = s.length() - 1; i >= 0; i--) {

        if (isdigit(s[i])) {
            st.push(s[i] - '0');
        }
        else {
            int a = st.top(); st.pop();
            int b = st.top(); st.pop();

            st.push(solve(a, b, s[i]));
        }
    }

    return st.top();
}

int main() {
    string exp = "+9*26";

    cout << evaluatePrefix(exp) << endl;

    return 0;
}