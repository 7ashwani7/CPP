//  Remove duplicates in a string.
#include <iostream>
#include <string>
using namespace std;
string removeDuplicates(string str) {
if (str.empty()) {
    return str;
}
    char ch = str[0];
    string rest = str.substr(1);
    if (rest.find(ch) != string::npos) {
        return removeDuplicates(rest);
    } else {
        return ch + removeDuplicates(rest);
    }
}
int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;
    cout << removeDuplicates(str) << endl;
}
