#include <iostream>
using namespace std;
int main(){
    cout<<"Enter first number: ";
    double num1;
    cin>>num1;
    cout<<"Enter second number: ";
    double num2;
    cin>>num2;
    cout<<"Enter an operator (+, -, *, /): ";
    char op;
    cin>>op;
    double result;
    if(op=='+'){
        result=num1+num2;
        cout<<"Result: "<<result<<endl;
    }
    else if(op=='-'){
        result=num1-num2;
        cout<<"Result: "<<result<<endl;
    }
    else if(op=='*'){
        result=num1*num2;
        cout<<"Result: "<<result<<endl;
    }
    else if(op=='/'){
        if(num2!=0){
            result=num1/num2;
            cout<<"Result: "<<result<<endl;
        }
        else{
            cout<<"Error: Division by zero is not allowed."<<endl;
        }
    }
    else{
        cout<<"Invalid operator! Please use one of +, -, *, /."<<endl;
    }
}