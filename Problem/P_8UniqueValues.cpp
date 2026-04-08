//WAP to print all the unique values in an array using function.
#include <iostream>
using namespace std;

void printUniqueValues(int arr[], int size) {
    cout << "Unique values in the array are\n ";
    
    for (int i = 0; i < size; i++) {
        bool isUnique = true;
        for (int j = 0; j < size; j++) {
            if (arr[i] == arr[j] && i != j) {
                isUnique = false;
                break;
            }
        }

        if (isUnique) {
            cout << arr[i] << " ";
        }
    }

    cout << endl;
}

int main() {
    int arr[] = {1, 2, 2, 3, 4, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    printUniqueValues(arr, size);

    return 0;
}
