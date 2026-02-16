// Bitwise Operator are  
// 1. Bitwise AND (&)
// 2. Bitwise OR (|)
// 3. Bitwise XOR (^)
// 4. Bitwise Left shift (<<)
// 5. Bitwise Right shift (>>)
#include <iostream>
using namespace std;
int main(){
  int a=8, b=3;
  cout<<(a&b)<<endl; 
  cout<<(a|b)<<endl; 
  cout<<(a^b)<<endl; 
  cout<<(a<<b)<<endl; //ans =a*2power b
  cout<<(a>>b)<<endl; //ans =a/2power b

    return 0;
}