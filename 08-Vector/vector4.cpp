#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
      cout<<"Enter the elements of vector\n";
      int value;
      while(1){
        cin>>value;
        if(value==-1)
        break;
        else{
            v.push_back(value);
        }
      }
      cout<<"The elements of vector are \n";
      for(auto val: v){
        cout<<val<<" " ;
      }
      return 0;
}
