#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    string a;
    cout << "Enter a string: ";
    getline(cin, a);
    reverse(a.begin(), a.end());
    cout << "Reversed string: " << a << endl;
    // string reversed = "";
    // for (int i = a.length() - 1; i >= 0; i--) {
    //     reversed += a[i];
    // }
    // cout << "Reversed string: " << reversed << endl;
    return 0;
}