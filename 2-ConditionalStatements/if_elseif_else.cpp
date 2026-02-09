#include<iostream>
using namespace std;
int main(){
int marks;
cout<<"Enter the marks :";
cin >> marks ;
if (marks>=90){
    cout <<"A\n";
}else if (marks>=80 && marks<90){
    cout <<"B\n";
}else if (marks>=70 && marks<80){
    cout <<"C\n";
}else if (marks>=60 && marks<70){
    cout <<"D\n";
}else if (marks>=50 && marks <60){
    cout <<"E\n";
}else if (marks>=40 && marks<50){
    cout<<"F\n";
}else{
    cout <<"Fail";
    
}

    return 0;
}