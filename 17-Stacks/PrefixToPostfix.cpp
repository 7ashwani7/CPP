#include <iostream>
#include <stack>
using namespace std;

string prefixToPostfix(string s) {
    stack<string> st;

    for (int i = s.length() - 1; i >= 0; i--) {

        if (isalnum(s[i])) {
            st.push(string(1, s[i]));
        }
        else {
            string a = st.top();
            st.pop();

            string b = st.top();
            st.pop();

            string exp = a + b + s[i];
            st.push(exp);
        }
    }

    return st.top();
}

int main() {
    string prefix = "*+ABC";

    cout << "Prefix  : " << prefix << endl;
    cout << "Postfix : " << prefixToPostfix(prefix) << endl;

    return 0;
}