#include <iostream>
using namespace std;
int main(){
int n;
bool isPrime=true;
cout<<"Enter the number n :";
cin>> n;
for( int i=2; i<=n-1;i++)//OR(int i=2; i*i<=n;i++)
{
    if(n%i==0){
        isPrime=false;
        break;
    }
}
if(isPrime ==true){
    cout<<"The given number is prime\n";
}else{
    cout<<"The given number is not prime\n";
}
    return 0;
}