#include <iostream>
using namespace std;
string reverse(string str) {
    if (str.length() == 1) {
        return str;
    }
    return reverse(str.substr(1)) + str[0];
}
    int main() {
    string str = "Hello, World!";
    string reversedStr = reverse(str);
    cout << "Original string: " << str << endl;
    cout << "Reversed string: " << reversedStr << endl;
}


