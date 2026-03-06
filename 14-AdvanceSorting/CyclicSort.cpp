#include <iostream>
using namespace std;
void cyclicSort(int nums[], int n) {
    int i = 0;
    while (i < n) {
        int correctIndex = nums[i] - 1;
        if (nums[i] != nums[correctIndex]) {
            int temp = nums[i];
            nums[i] = nums[correctIndex];
            nums[correctIndex] = temp;
        } else {
            i++;
        }
    }
}

int main() {
      int arr[]= {3, 5, 2, 1, 4};
      int n = sizeof(arr) / sizeof(arr[0]);
        cyclicSort(arr, n);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
    return 0;
}

