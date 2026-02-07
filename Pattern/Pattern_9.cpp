//Floyd's Triangle Pattern
    // 1 
    // 2 3 
    // 4 5 6 
    // 7 8 9 10 
    
    // A 
    // B C 
    // D E F 
    // G H I J
#include <iostream>
using namespace std;
int main(){
    int n=4,num=1;
for(int i=0;i<n ;i++){
    for(int j=0; j<i+1;j++){
        cout<<num<<" ";
        num+=1;
    }
    cout<<endl;
}
 char ch='A';
for(int i=0;i<n ;i++){
    for(int j=0; j<i+1;j++){
        cout<<ch<<" ";
        ch+=1;
    }
    cout<<endl;
}


    return 0;
}