#include <iostream>
using namespace std;

int main() {
    int  n  =  5  ;  //0101 
    int  pos  =  1  ; 
    int  bitMask  =  1  <<  pos  ; 
    int newNumber = bitMask | n; 
    cout << newNumber << endl;
    
    return 0;
}
