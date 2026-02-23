#include <iostream>
#include <string>
using namespace std;
int main() {
    string a;
    cout << "Enter a string: ";
    cin >> a; // Taking input from the user
    string substring = a.substr(0, 3); // Extracting the first three characters as a substring
    cout << "The substring is: " << substring << endl; // Displaying the substring back to the user
    return 0;
}