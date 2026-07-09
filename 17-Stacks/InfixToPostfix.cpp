#include <iostream>
#include <stack>
using namespace std;

int precedence(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    if (op == '^') return 3;
    return 0;
}

string infixToPostfix(string s) {
    stack<char> st;
    string ans = "";

    for (char ch : s) {

        if (isalnum(ch)) {
            ans += ch;
        }

        else if (ch == '(') {
            st.push(ch);
        }

        else if (ch == ')') {
            while (!st.empty() && st.top() != '(') {
                ans += st.top();
                st.pop();
            }

            if (!st.empty()) st.pop();
        }

        else {
            while (!st.empty() &&
                   st.top() != '(' &&
                   precedence(st.top()) >= precedence(ch)) {
                ans += st.top();
                st.pop();
            }

            st.push(ch);
        }
    }

    while (!st.empty()) {
        ans += st.top();
        st.pop();
    }

    return ans;
}

int main() {
    string infix = "(A+B)*C-D/E";

    cout << "Infix   : " << infix << endl;
    cout << "Postfix : " << infixToPostfix(infix) << endl;

    return 0;
}