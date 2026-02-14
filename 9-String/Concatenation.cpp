#include <iostream>
using namespace std;
int main() {
    string a, b;
    cout << "Enter two strings: ";
    cin >> a >> b; // Taking input from the user
    string concatenated = a + b; // Concatenating the two strings
    cout << "Concatenated string: " << concatenated << endl; // Displaying the concatenated string back to the user
    return 0;
}