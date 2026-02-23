#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout <<"Odd numbers up to " << n << " are:" << endl;
    for (int i = 1; i <= n; i += 2) {
        cout << i << " ";
    }
    return 0;
}