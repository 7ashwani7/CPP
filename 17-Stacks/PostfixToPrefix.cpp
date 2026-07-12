#include <iostream>
#include <stack>
using namespace std;

string postfixToPrefix(string s) {
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

            string exp = ch + a + b;
            st.push(exp);
        }
    }

    return st.top();
}

int main() {
    string postfix = "AB+C*";

    cout << "Postfix : " << postfix << endl;
    cout << "Prefix  : " << postfixToPrefix(postfix) << endl;

    return 0;
}