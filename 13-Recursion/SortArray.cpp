// Check if an array is sorted (strictly increasing). - O(n)
#include <iostream>
using namespace std;
bool isSorted(int arr[], int index, int size) {
    if (index == size - 1) {
        return true;
    }
    if (arr[index] >= arr[index + 1]) {
        return false;
    }
    return isSorted(arr, index + 1, size);
}
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    if(isSorted(arr, 0, size)) {
        cout << "The array is sorted." << endl;
    } else {
        cout << "The array is not sorted." << endl;
    }
    
}
