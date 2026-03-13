//Program for delete the given element into an array.
#include<iostream>
using namespace std;
int main(){
    int arr[100],n,ele,pos;
    cout<<"Enter the number of element in the array :";
    cin>>n;
    cout<<"Enter the eleement of array \n";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Enter the position where the element is to be deleted :";
    cin>>pos;
    ele=arr[pos-1];
    for(int i=pos-1;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    n--;
    cout<<"The array after deletion of "<<ele<<" is :";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}