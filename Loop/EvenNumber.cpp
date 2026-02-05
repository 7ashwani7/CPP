#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout <<"Even numbers up to " << n << " are:" << endl;
    for (int i = 2; i <= n; i += 2) {
        cout << i << " ";
    }   
}