
#include <iostream>
using namespace std;

int main() {
    int oper=1;
    // cout << "Enter the operation (1 for set, 0 for clear): ";
    // cin >> oper;
    int n = 5;  // 0101
    int pos = 1;
    int bitMask = 1 << pos;
    if(oper == 1){
        // set bit
        int newNumber = bitMask | n;
        cout << newNumber << endl;
    } else {
        // clear bit
        int newBitMask = ~(bitMask);
        int newNumber = newBitMask & n;
        cout << newNumber << endl;
    }
    return 0;
}
