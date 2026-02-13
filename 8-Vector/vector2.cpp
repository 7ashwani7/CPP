#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v={4,5,7,2,1};
   cout<<"Size of vector :"<<v.size()<<endl;
    cout<<"Capacity of  vector :"<<v.capacity()<<endl;
    for(int i=0;i<v.size();i++){
    cout<<v[i]<<endl;
    }
   
    cout<<v.at(4)<<endl;
    cout<<"arr:"<<v[4]<<endl;
    cout<<v.front()<<endl;//gives the first element
    cout<<v.back()<<endl;//gives the last element
    v.push_back(9);
    v.push_back(15);
    v.push_back(23);
    cout<<"new vector is"<<endl;
   for(int value:v){
    cout<<value<<endl;
   }
    v.pop_back();//use to remove last element
   for(int value:v){

    cout<<"new output element"<<value<<endl;
   }
   //to check a vector is empty or not
   if(v.empty()){
    cout<<" empty"<<endl;
   }
   else{
 cout<<"not empty"<<endl;
   }
    
  
    v.erase(v.begin(),v.end()-4);
      for(int value:v){
    cout<<value<<endl;
   }
   //insert
   v.insert(v.begin()+1,99);
for(int value:v){
    cout<<value<<endl;
   } v.insert(v.begin()+1,4,66);
for(int value:v){
    cout<<value<<endl;
   }
   //swaping
   
   vector<int>v1 ={2,9,3,5,6,7,8};vector<int>v2 ={233,34,56,78,90,12,34};
v1.swap(v2);
cout<<"v1's element"<<endl;
for(int value:v1){
    cout<<value<<endl;
   }cout<<"v2's element"<<endl;
   for(int value:v2){
    cout<<value<<endl;
   }
//use to clear all elements from the vector
   v.clear();
   for(int value:v){
    cout<<value<<endl;
   }
    return 0;
}