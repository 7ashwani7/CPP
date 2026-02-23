#include <iostream>
#include <climits>

using namespace std;

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int numbers[size];

    for (int i = 0; i < size; i++) {
        cout << "Enter number " << (i + 1) << ": ";
        cin >> numbers[i];
    }
    int maxVal = INT_MIN;
    int minVal = INT_MAX;

    for (int i = 0; i < size; i++) {
        if (numbers[i] > maxVal) {
            maxVal = numbers[i];
        }
        if (numbers[i] < minVal) {
            minVal = numbers[i];
        }
    }

    cout << "Maximum number: " << maxVal << endl;
    cout << "Minimum number: " << minVal << endl;

    return 0;
}