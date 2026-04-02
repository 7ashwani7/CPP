#include<iostream>
using namespace std;
int main(){
int size=5;
int marks[size];
cout<<"Enter the marks\n";
for(int i=0; i<size; i++){
    cin>>marks[i];
}
for(int i=0; i<size; i++){
    cout<<marks[i]<<endl;
}
    return 0;
}