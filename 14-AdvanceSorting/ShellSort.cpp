#include <iostream>
using namespace std;

void shellSort(int nums[], int n) {
    for (int gap = n / 2; gap > 0; gap /= 2) {
        for (int i = gap; i < n; i++) {
            int temp = nums[i];
            int j;
            for (j = i; j >= gap && nums[j - gap] > temp; j -= gap) {
                nums[j] = nums[j - gap];
            }
            nums[j] = temp;
        }
    }
}

int main() {
    int data[] = {12, 34, 54, 2, 3};
    int n = 5;
    shellSort(data, n);
    for(int i = 0; i < n; i++){
        cout << data[i] << " ";
    }
    return 0;
}

