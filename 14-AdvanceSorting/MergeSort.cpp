#include <iostream>
#include <algorithm>
using namespace std;

   void merge(int arr[], int low, int mid, int high) {
      int n1 = mid - low + 1;
      int n2 = high - mid;
      int* left = new int[n1];
      int* right = new int[n2];
      for (int i = 0; i < n1; i++) {
         left[i] = arr[low + i];
      }
      for (int j = 0; j < n2; j++) {
         right[j] = arr[mid + 1 + j];
      }
      int i = 0, j = 0, k = low;
      while (i < n1 && j < n2) {
         if (left[i] <= right[j]) {
            arr[k] = left[i];
            i++;
         } else {
            arr[k] = right[j];
            j++;
         }
         k++;
      }
      while (i < n1) {
         arr[k] = left[i];
         i++;
         k++;
      }
      while (j < n2) {
         arr[k] = right[j];
         j++;
         k++;
      }
      delete[] left;
      delete[] right;
   }
   void divide(int arr[], int low, int high) {
      if (low < high) {
         int mid = (low + high) / 2;
         divide(arr, low, mid);
         divide(arr, mid + 1, high);
         merge(arr, low, mid, high);
      }
   }
   int main() {
      int arr[] = {38, 27, 43, 3, 9, 82, 10};
      int n = sizeof(arr) / sizeof(arr[0]);
      divide(arr, 0, n - 1);
      cout << "Sorted array: ";
      for (int i = 0; i < n; i++) {
         cout << arr[i] << " ";
      }
      cout << endl;
      return 0;
   }
