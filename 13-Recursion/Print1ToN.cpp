// To print numbers from 1 to n using recursion
#include <iostream>
using namespace std;
void printNumber(int n) {
if (n == 0) {
    return;
}
    printNumber(n - 1);
    cout << n << endl;
}
int main() {
    int n;
    cout << "Enter a number: ";   
    cin >> n;
    printNumber(n);
    return 0;
}