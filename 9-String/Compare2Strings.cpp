#include <iostream>
#include <string>
using namespace std;
int main() {
    string st1;
    cout << "Enter a string: ";
    cin >> st1; 
    string st2;
    cout << "Enter another string: ";
    cin >> st2; 
    if (st1 == st2) {
        cout << "The strings are equal." << endl;
    } else {
        cout << "The strings are not equal." << endl;
    }
}