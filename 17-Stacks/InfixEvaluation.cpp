#include <iostream>
#include <stack>
using namespace std;

int precedence(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    return 0;
}
int solve(int a, int b, char op) {
    if (op == '+') return a + b;
    if (op == '-') return a - b;
    if (op == '*') return a * b;
    if (op == '/') return a / b;
    return 0;
}

int evaluate(string s) {
    stack<int> values;
    stack<char> ops;

    for (int i = 0; i < s.length(); i++) {

        if (isdigit(s[i])) {
            values.push(s[i] - '0');
        }

        else if (s[i] == '(') {
            ops.push(s[i]);
        }

        else if (s[i] == ')') {

            while (ops.top() != '(') {
                int b = values.top(); values.pop();
                int a = values.top(); values.pop();

                char op = ops.top(); ops.pop();

                values.push(solve(a, b, op));
            }

            ops.pop();
        }

        else {
            while (!ops.empty() &&
                   precedence(ops.top()) >= precedence(s[i])) {

                int b = values.top(); values.pop();
                int a = values.top(); values.pop();

                char op = ops.top(); ops.pop();

                values.push(solve(a, b, op));
            }

            ops.push(s[i]);
        }
    }

    while (!ops.empty()) {
        int b = values.top(); values.pop();
        int a = values.top(); values.pop();

        char op = ops.top(); ops.pop();

        values.push(solve(a, b, op));
    }

    return values.top();
}

int main() {
    string exp = "2+(6*4)/8-3";

    cout << evaluate(exp) << endl;

    return 0;
}