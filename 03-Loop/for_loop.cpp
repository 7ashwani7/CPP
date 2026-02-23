#include <iostream>
using namespace std;
int main(){
int n,sum=0,oddSum=0,evenSum=0;
cout<<"Enter the number n :";
cin>> n;
for(int i=1;i<=n;i++){
    sum+=i;
    if(i%2!=0){
        oddSum+=i;
    }else{
        evenSum+=i;
    }
}
cout<<"sum of "<<n <<" numbers ="<<sum<<endl;
cout<<"sum of "<<n <<" even numbers ="<<evenSum<<endl;
cout<<"sum of "<<n <<" odd numbers ="<<oddSum<<endl;

    return 0;
}