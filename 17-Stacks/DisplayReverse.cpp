#include<iostream>
#include<stack>
using namespace std;
void displayRev(stack<int> s){
    stack<int> temp;   
    while(!s.empty()){
        cout << s.top() << " ";
        temp.push(s.top());
        s.pop();
    }
    while(!temp.empty()){
        s.push(temp.top());
        temp.pop();
    }
    cout << endl;
}
int main(){
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    displayRev(s);
    
    return 0;
}