#include<iostream>
using namespace std;
void reveresArray(int arr[], int sz){
    int start=0, end=sz-1;
    while(start<end){
        swap(arr[start],arr[end]);
            start++;
            end--;
        }
    }
    int main(){
        int arr[]={5,4,7,9,8};
        int sz=5;
        reveresArray(arr,sz);
        for(int i=0 ;i<sz; i++){
            cout<<arr[i]<<" ";

        }

cout<<endl;

        return 0;
    }
