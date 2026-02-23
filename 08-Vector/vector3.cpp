#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<string>v={"Ram","toy","gay","patel","vis"};
   cout<<"Size of vector :"<<v.size()<<endl;
    cout<<"Capacity of  vector :"<<v.capacity()<<endl;
    for(int i=0;i<v.size();i++){
    cout<<v[i]<<endl;
 } 
}