//Program to find the missing number from the array which has the number in the range 1 to n.
#include<iostream>
using namespace std;
int main(){
    int arr[100],n,sum=0,totalsum;
    cout<<"Enter the number of element in the array :";
    cin>>n;
    cout<<"Enter the elements  of array \n";
    for(int i=0; i<n-1; i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    totalsum=n*(n+1)/2;
    cout<<"The missing number is:"<<totalsum-sum;
    
    return 0;
}