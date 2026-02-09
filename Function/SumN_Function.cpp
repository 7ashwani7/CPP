#include <iostream>
using namespace std;
int sumN(int n){
    int sum =0;
    for(int i=0; i<n ; i++){
        sum+=i;
    }
    return sum;
}
int main(){
    int n;
    cout<<"Enter the number  n :";
    cin>>n;
    cout<<"sum of  "<<n<<" numbers is "<<sumN(n)<<endl;
    return 0;
}