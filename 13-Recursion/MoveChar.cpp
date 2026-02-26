//Move all ‘x’ to the end of the string. - O(n)
#include <iostream>
using namespace std;
    string moveX(string str) {
    if (str.empty()) {
        return str;
    }
    char ch = str[0];
    string rest = str.substr(1);
    if (ch == 'x') {
        return moveX(rest) + ch;
    } else {
        return ch + moveX(rest);
    }
}
int main() {
    cout << moveX("axbxcxd") << endl;
    return 0;
}
