//Program for insertion in the sorted array.
#include<iostream>
using namespace std;
int main(){
    int arr[100],n,ele,pos;
    cout<<"Enter the number  of element in the array :";
    cin>>n;
    cout<<"Enter the  elements of array in sorted order\n";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Enter the element to be inserted :";
    cin>>ele;
    cout<<"Enter the position where the element is to be inserted :";
    cin>>pos;
    for(int i=n-1; i>=pos-1; i--){
        arr[i+1]=arr[i];
    }
    arr[pos-1]=ele;
    n++;
    cout<<"The array after insertion is :";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}