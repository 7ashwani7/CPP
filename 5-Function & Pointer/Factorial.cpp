#include <iostream>
using namespace std;
int fact(int n){
    int fact =1;
    for(int i=1; i<=n ; i++){
    fact*=i;
    }
    return fact;
}
int main(){
    int n;
    cout<<"Enter the number  n :";
    cin>>n;
    cout<<"The factorial of  "<<n<<" numbers is "<<fact(n)<<endl;
    return 0;
}