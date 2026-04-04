#include <iostream>
using namespace std;
int linearSearch( int arr[],int size, int traget){
    for(int i=0; i<size; i++){
        if(arr[i]==traget){
            return i;
        }
    }
    return -1;

}
int main(){
int arr[]={99, 88, 77, 66, 55, -20};
int size=6;
int traget=55;

cout<<"The index of the number is  "<<linearSearch(arr, size , traget)<<endl;


return 0;
}