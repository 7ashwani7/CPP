#include <iostream>
#include <string>
using namespace std;

int main() {
    string a;
    cout << "Enter a string: ";
    cin >> a;
    int num = stoi(a); // Convert the string to an integer
    cout << "The number is: " << num << endl;
    return 0;
}