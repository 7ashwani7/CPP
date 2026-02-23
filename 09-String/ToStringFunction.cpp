#include <iostream>
#include <string>
using namespace std;
int main() {
    int a; 
    cout << "Enter a number: ";
    cin >> a;
    string str = to_string(a); // Convert the integer to a string
    cout << "The number as a string is: " << str << endl; 
}