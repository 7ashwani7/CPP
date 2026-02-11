#include <iostream>
using namespace std;

int main() {
    // Creating an array of integers
    int numbers[5] = {10, 20, 30, 40, 50}; // This creates and initializes an array that can hold 5 integers

    // Printing the values of the array
    for (int i = 0; i < 5; i++) {
        cout << "Element at index " << i << ": " << numbers[i] << endl;
    }

    return 0;
}