#include <iostream>
using namespace std;

int main() {
    int  n  =  5  ;  //0101 
    int  pos  =  3  ; 
    int  bitMask  =  1  <<  pos  ; 
    if((bitMask & n) ==  0) { 
        cout << "bit was zero" << endl; 
    } 
    else{ 
        cout << "bit was one" << endl; 
    }
    return 0;
}
