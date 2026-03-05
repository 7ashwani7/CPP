//Print x^n (with stack height = n)
#include <iostream>
using namespace std;
int power(int x, int n) {
    if (n == 0) {
        return 1;
    }
        if(n % 2 == 0){
        int halfPower = power(x, n / 2);
        return halfPower * halfPower;
    } else {
        int halfPower = power(x, n / 2);
        return x * halfPower * halfPower;
    }
}
int main() {
    int x, n;
    cout << "Enter base (x): ";
    cin >> x;
    cout << "Enter exponent (n): ";
    cin >> n;
    int result = power(x, n);
    cout << x << "^" << n << " = " << result << endl;
}

