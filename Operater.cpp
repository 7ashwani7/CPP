//Arithmetic -> +,-,*,/,%
//Relational -> <,<=,>,>=,==,!=
//Logical -> ||(OR),&&(AND),!(NOT)
#include <iostream>
using namespace std;
int main(){
cout<<int(3<5)<<"\n";//-> true
cout<<int(3<=3)<<"\n";//-> true
cout<<int(3>5)<<"\n";//-> false
cout<<int(3>=3)<<"\n";//-> true
cout<<int(3==3)<<"\n";//-> true
cout<<int(3!=5)<<"\n";//-> true
cout<<int(3!=3)<<"\n";//-> false
cout<<int{(5>7)||(7>6)}<<"\n"; // -> true
cout<<int{(5>7)&&(7>6)}<<"\n"; // -> false
cout<<!int{(5>7)||(7>6)}<<"\n"; // -> false
return 0;
}