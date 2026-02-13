#include<bits/stdc++.h>
using namespace std;
int main(){
   int value;
    vector<int>v1;
    vector<int>v2;
    
    cout <<"Enter the of vector v1\n";
     while(1){
        cin>>value;
        if(value==-1)
        break;
        else{
            v1.push_back(value);
        }
      }
      cout<<"Enter the elements of vector v2\n";
       while(1){
        cin>>value;
        if(value==-1)
        break;
        else{
            v2.push_back(value);
        }
      }
      int n=v1.size(), m=v2.size();
      vector<int>v3(n+m);
      merge(v1.begin(),v1.end(),v2.begin(),v2.end(),v3.begin());
      cout<<"Elements of vector v3 :";
        for(auto val : v3){
          cout<<val<<" ";
        }
      cout<<endl;
      sort(v1.begin(),v1.end());
      cout<<"The sorted vector v1:";
      for(auto val : v1){
          cout<<val<<" ";
        }
      cout<<endl;
      sort(v1.begin(),v1.end(), greater<int>());
      cout<<"The sorted vector  v1 in :";
      for(auto val : v1){
          cout<<val<<" ";
        }
        cout<<endl;
        reverse(v1.begin(),v1.end());
        cout<<"The reversed vector v1:";
        for(auto val : v1){
          cout<<val<<" ";
        }
        cout<<endl;
        swap(v1, v2);
        cout<<"The swap vector v1:";
        for(auto val : v1){
          cout<<val<<" ";
        }
        cout<<endl;
        cout<<"The swap vector v2:";
        for(auto val : v2){
          cout<<val<<" ";
        }
        max(v1.begin(),v1.end());
        min(v1.begin(),v1.end());
    return 0;
}
