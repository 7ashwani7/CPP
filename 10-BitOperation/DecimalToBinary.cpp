#include <iostream>
using namespace std;
int DtoB(int n){
    int ans=0,pow=1;
    while(n>0){
        int rem=n%2;
        n/=2;
        ans+=(rem*pow);
        pow*=10;
    }
    return ans;
}
int main(){
int num; 
cout<<"Enter the number :";
cin>>num;
cout<<"The binary number is "<<DtoB(num)<<endl;

    return 0;
}