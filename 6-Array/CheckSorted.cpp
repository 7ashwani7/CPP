// Take an array of numbers as input and check if it is an array sorted in ascending order.
#include <iostream>
using namespace std;

int main() {
    cout << "Enter the size of the array: ";
    int size;
    cin >> size;
    int num[size];
    for (int i = 0; i < size; i++) {
        cout << "Enter number " << (i + 1) << ": ";
        cin >> num[i];
    }
    bool isSorted = true;
    for (int i = 0; i < size - 1; i++) {
        if (num[i] > num[i + 1]) {
            isSorted = false;
            break;
        }
    }
    if (isSorted) {
        cout << "The array is sorted in ascending order." << endl;
    } else {
        cout << "The array is not sorted in ascending order." << endl;
    }
    return 0;
}