#include <iostream>
using namespace std ;
int sum(int a, int b){
    int s=a+b;
    return s;
}
int main(){
    int a,b;
    cout<<"Enter the number a :"; 
    cin>>a;
    cout<<"Enter the number b :"; 
    cin>>b;
    cout<<"sum="<<sum(a,b)<<endl;


    return 0;
}