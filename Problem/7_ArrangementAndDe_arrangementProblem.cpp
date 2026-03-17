//Program for reversal of an array.
#include<iostream>
using namespace std;
void reverse(int arr[], int n){
    int start = 0;
    int end = n-1;
    while(start < end){
    int tem=arr[start];
    arr[start]=arr[end];
    arr[end]=tem;
    start++;
    end--;
}

   // while(start < end){
       // swap(arr[start], arr[end]);
      //  start++;
      //  end--;
   // }
}
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array \n";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    reverse(arr, n);
    cout<<"Reversed array is: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}