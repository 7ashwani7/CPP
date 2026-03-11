//Program to insert the given element into an array.
#include<iostream>
using  namespace std;
int main(){
    int arr[100],n,pos,ele;
    cout<<"Enter the size of array :";
    cin>>n;
    cout<<"Enter number of element in array\n";
    for(int i=0; i<n ;i++){
        cin>>arr[i];
    }
    cout<<"Enter the position where you want to insert the element:";
    cin>>pos;
    cout<<"Enter the element you want to insert:";
    cin>>ele;
    for(int i=n-1; i>=pos-1; i--){
        arr[i+1]=arr[i];
    }
    arr[pos-1]=ele;
    cout<<"Array after insertion is :";
    for(int i=0; i<=n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}