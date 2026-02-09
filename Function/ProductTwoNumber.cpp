#include <iostream>
using namespace std;
int productTwoNumber(int a, int b) {
    return a * b;
}
int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    int product = productTwoNumber(num1, num2);
    cout << "The product of " << num1 << " and " << num2 << " is " << product << endl;
    return 0;
}