#include <iostream>
#include <string>
using namespace std;
void TOH(int n, char source, char destination, char helper) {
    if (n == 0) {
        return;
    }
    TOH(n - 1, source, helper, destination);
    cout << "Move disk " << n << " from " << source << " to " << destination << endl;
    TOH(n - 1, helper, destination, source);
}
int main() {
    int n;
    cout << "Enter the number of disks: ";    
    cin >> n;
    TOH(n, 'A', 'C', 'B');
}

