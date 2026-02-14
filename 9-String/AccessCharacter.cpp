#include <iostream>
#include <string>
using namespace std;

int main() {
    string a;
    cout << "Enter a string: ";
    cin >> a; // Taking input from the user
    cout << "The first character is: " << a[0] << endl;
    cout <<"The second character is: " << a[1] << endl;
    cout << "The third character is: " << a[2] << endl;
    cout << "The last character is: " << a[a.length()-1] << endl;
    return 0;
}