#include <iostream>
using namespace std;
bool isEven(int number) {
    return number % 2 == 0;
}
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (isEven(num)) {
        cout << num << " is an even number." << endl;
    } else {
        cout << num << " is an odd number." << endl;
    }
    return 0;
}