#include <iostream>
using namespace std;
int stack[100];
int Max=100;

int top = -1;
void push(int x){
    if(top==Max-1){
        cout<<"stack overflow"<<endl;
    }else{
        top++;
    stack[top] = x;
    cout<<x<<" pushed into stack"<<endl;
    }
}
    void  pop(){
        if(top==-1){
            cout<<"stack underflow"<<endl;
        }else{
            int x = stack[top];
            top--;
            cout<<x<<" popped from stack"<<endl;
        }
    }
    void display(){
        if(top==-1){
            cout<<"stack is empty"<<endl;
        }
        else{
            for(int i=top;i>=0;i--){
                cout<<stack[i]<<" ";
            }
            cout<<endl;
        }
    }
    int main(){
        int choice,value;
        while(true){
            cout<<"1.push 2.pop 3.display 4.exit"<<endl;
            cout<<"enter your choice"<<endl;
            cin>>choice;
            switch(choice){
                case 1:
                cout<<"enter value to be pushed"<<endl;
                cin>>value;
                push(value);
                break;
                case 2:
                pop();
                break;
                case 3:
                display();
                break;
                case 4:
                exit(0);
                default:
                cout<<"invalid choice"<<endl;
            }
        }
    }