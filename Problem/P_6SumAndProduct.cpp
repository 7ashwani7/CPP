//WAP to calaulate sum and product of all number in an array using function.
#include <iostream>
using namespace std;

int Sum(int arr[], int size) {
    int sum = 0;
    for(int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}
int Product(int arr[], int size) {
    int product = 1;
    for(int i = 0; i < size; i++) {
        product *= arr[i];
    }
    return product;
}

int main() {
    int n;
    cout << "Enter number of elements in the array: ";
    cin >> n;

    int arr[n];
    cout<<"Enter the elements of array\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int sum =Sum(arr, n);
    int product =Product(arr, n);

    cout << "Sum of all elements: " << sum << endl;
    cout << "Product of all elements: " << product << endl;

    return 0;
}
