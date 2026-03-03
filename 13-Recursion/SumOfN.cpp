#include <iostream>
using namespace std;
int sumOfN(int n) {
    if (n == 0) {
        return 0;
    }
    return n + sumOfN(n - 1);
}
int main() {
    int n;
    cout << "Enter a number: ";   
    cin >> n;
    int sum = sumOfN(n);
    cout << "The sum of first " << n << " natural numbers is: " << sum << endl;
}

