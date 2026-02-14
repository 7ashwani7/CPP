#include <iostream>
#include <string>
using namespace std;

int main() {
    string a;
    cout << "Enter a string: ";
    cin >> a; // Taking input from the user
    int length = a.length(); // Finding the length of the string
    cout << "Length of the string is: " << length << endl; // Displaying the length back to the user
    return 0;
}