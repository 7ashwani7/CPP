#include <iostream>
using namespace std;

int main() {
    int  n  =  5  ;  //0101 
    int  pos  =  2  ; 
    int  bitMask  = 1 << pos;
    int newBitMask = ~(bitMask); 
    int newNumber = newBitMask & n; 
    cout << newNumber << endl;
    return 0;
}
