#include <iostream>
#include <stack>
using namespace std;

string postfixToInfix(string s) {
    stack<string> st;

    for (char ch : s) {

        if (isalnum(ch)) {
            st.push(string(1, ch));
        }
        else {
            string b = st.top();
            st.pop();

            string a = st.top();
            st.pop();

            string exp = "(" + a + ch + b + ")";
            st.push(exp);
        }
    }

    return st.top();
}

int main() {
    string postfix = "AB+C*";

    cout << "Postfix : " << postfix << endl;
    cout << "Infix   : " << postfixToInfix(postfix) << endl;

    return 0;
}