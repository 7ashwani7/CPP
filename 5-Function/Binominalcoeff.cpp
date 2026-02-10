#include <iostream>
using namespace std;
int fact(int n){
    int fact =1;
    for(int i=1; i<=n ; i++){
    fact*=i;
    }
    return fact;
}
 int nCr(int n, int r){
    int fact_n=fact(n);
    int fact_r=fact(r);
    int fact_nMr=fact(n-r);
    return fact_n/(fact_r*fact_nMr);

 }
int main(){
    int n,r;
    cout<<"Enter the number  n :";
    cin>>n;
    cout<<"Enter the number  r :";
    cin>>r;
    cout<<"The of value nCr =  "<<nCr(n,r)<<endl;
    return 0;
}