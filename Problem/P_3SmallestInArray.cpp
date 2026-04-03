#include <iostream>
#include <climits>
using namespace std;
int main(){
int marks[]={99, 88, 77, 66, 55, -20};
int size=6;
int smallest=INT_MAX;
int largest=INT_MIN;
for(int i=0; i<size; i++){
    if(marks[i]<smallest){//min(marks[i],smallest)
        smallest=marks[i];
    }
 largest=max(marks[i],largest);
}
cout<<"The smallest number is "<<smallest<<endl;
cout<<"The largest number is  "<<largest<<endl;
    return 0;
}