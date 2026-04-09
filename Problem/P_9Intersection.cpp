//WAP to print intersection of 2 arrays using function.
#include <iostream>
using namespace std;

// Function to print intersection of two arrays
void printIntersection(int arr1[], int size1, int arr2[], int size2) {
    cout << "Intersection of the two arrays is: ";

    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            if (arr1[i] == arr2[j]) {
                // Check if already printed (to avoid duplicates)
                bool alreadyPrinted = false;
                for (int k = 0; k < i; k++) {
                    if (arr1[k] == arr1[i]) {
                        alreadyPrinted = true;
                        break;
                    }
                }
                if (!alreadyPrinted) {
                    cout << arr1[i] << " ";
                }
                break; 
            }
        }
    }

    cout << endl;
}

int main() {
    int arr1[] = {1, 2, 2, 3, 4};
    int arr2[] = {2, 2, 4, 6};

    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    printIntersection(arr1, size1, arr2, size2);

    return 0;
}
