#include <iostream>
#include <string>
using namespace std;
int main() {
    string a;

    // string b;
    // cout<<"First string: " << endl;
    // cin >> a; 
     // Displaying the first string
    // cout << a << endl; // Displaying the first string   
    cout<<"Enter a string: ";
    getline(cin, a); // To read the second string including spaces
    cout << "You entered: " << a << endl; // Displaying the input back to the user
    return 0;
}