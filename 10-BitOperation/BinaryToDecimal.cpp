#include <iostream>
using namespace std;
int BtoD(int n){
    int ans=0,pow=1;
    while(n>0){
        int rem=n%10;
        ans+=(rem*pow);
        n/=10;
        pow*=2;
    }
    return ans;
}
int main(){
int num; 
cout<<"Enter the number :";
cin>>num;
cout<<"The decimal number is "<<BtoD(num)<<endl;

    return 0;
}