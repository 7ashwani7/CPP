//WAP to swap the max and min number of an array using function.
#include <iostream>
using namespace std;

void swapMaxMin(int arr[], int size) {
    int maxIndex = 0;
    int minIndex = 0;

    for (int i = 1; i < size; i++) {
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
    }

    int temp = arr[maxIndex];
    arr[maxIndex] = arr[minIndex];
    arr[minIndex] = temp;
}

int main() {
    int arr[100], n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    cout << "Enter the elements of array\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    swapMaxMin(arr, n);
    cout << "Array after swapping max and min elements\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
