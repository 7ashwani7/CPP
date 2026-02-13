#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    cout<<"Size of vector :"<<v.size()<<endl;
    cout<<"Capacity of  vector :"<<v.capacity()<<endl;
     vector<int>v1(5);
    cout<<"Size of vector :"<<v1.size()<<endl;
    cout<<"Capacity of  vector :"<<v1.capacity()<<endl;
     vector<int>v2={1,3,4,7,8};
    cout<<"Size of vector :"<<v2.size()<<endl;
    cout<<"Capacity of  vector :"<<v2.capacity()<<endl;
     vector<int>v3;
     v3.push_back(1);
     v3.push_back(3);
     v3.push_back(4);
     v3.push_back(6);
     v3.push_back(8);
     v3.push_back(2);
     v3.push_back(10);
     v3.push_back(11);
     v3.push_back(12);
    cout<<"Size of vector :"<<v3.size()<<endl;
    cout<<"Capacity of  vector :"<<v3.capacity()<<endl;
     cout<< "The elements of v3 are :";
   // for(int i=0 ; i<v3.size(); i++){
       // cout<<v3[i]<<" ";
   // }
     for(int val: v3){
        cout<<val<<" ";
     }
     cout<<endl;
     cout<< "The elements of v4 are :";
     vector<int>v4(5,3);
     for(int val: v4){
        cout<<val<<" ";
     }

    return 0;
}