#include <iostream>
using namespace std;
int sumD(int num){
    int sum =0;
    while(num>0){
        int lastD=num%10;
        num/=10;
        sum+=lastD;
    }
    return sum;
}
int main(){
    int num;
    cout<<"Enter the number  num :";
    cin>>num;
    cout<<"sum of  digits is "<<sumD(num)<<endl;
    return 0;
}