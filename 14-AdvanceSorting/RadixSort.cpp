#include <iostream>
#include <algorithm>
using namespace std;

int getMax(int nums[], int n) {
    int max = nums[0];
    for (int i = 1; i < n; i++) {
        if (nums[i] > max) {
            max = nums[i];
        }
    }
    return max;
}

void countSort(int nums[], int n, int exp) {
    int output[n];
    int count[10] = {0};

    for (int i = 0; i < n; i++) {
        count[(nums[i] / exp) % 10]++;
    }

    for (int i = 1; i < 10; i++) {
        count[i] += count[i - 1];
    }

    for (int i = n - 1; i >= 0; i--) {
        output[count[(nums[i] / exp) % 10] - 1] = nums[i];
        count[(nums[i] / exp) % 10]--;
    }

    for (int i = 0; i < n; i++) {
        nums[i] = output[i];
    }
}

void radixSort(int nums[], int n) {
    int max = getMax(nums, n);
    for (int exp = 1; max / exp > 0; exp *= 10) {
        countSort(nums, n, exp);
    }
}

int main() {
    int data[] = {170, 45, 75, 90, 802, 24, 2, 66};
    int n = sizeof(data) / sizeof(data[0]);
    radixSort(data, n);
    for (int i = 0; i < n; i++) {
        cout << data[i] << " ";
    }
    cout << endl;
    return 0;
}

