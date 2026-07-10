#include <iostream>
#include <stack>
#include <algorithm>
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

            st.pop();
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

string infixToPrefix(string s) {

    reverse(s.begin(), s.end());

    for (char &ch : s) {
        if (ch == '(') ch = ')';
        else if (ch == ')') ch = '(';
    }

    string postfix = infixToPostfix(s);

    reverse(postfix.begin(), postfix.end());

    return postfix;
}

int main() {

    string infix = "(A+B)*C";

    cout << "Infix  : " << infix << endl;
    cout << "Prefix : " << infixToPrefix(infix) << endl;

    return 0;
}