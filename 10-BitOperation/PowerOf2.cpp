// Write a program to find if a number is a power of 2 or not.
#include <iostream>
using namespace std;

bool isPowerOf2(int n) {
    if(n <= 0) {
        return false;
    }
    return (n & (n - 1)) == 0;
}

int main() {
    cout << "Enter the number: ";
    int n;
    cin >> n;
    if(isPowerOf2(n)) {
        cout << n << " is a power of 2." << endl;
    } else {
        cout << n << " is not a power of 2." << endl;
    }
    return 0;
}
