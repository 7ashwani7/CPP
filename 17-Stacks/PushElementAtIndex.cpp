#include<iostream>
#include<stack>
using namespace std;
void display(stack<int> s){
    stack<int> temp;   
    while(!s.empty()){
        temp.push(s.top());
        s.pop();
    }
    while(!temp.empty()){
        cout << temp.top() << " ";
        s.push(temp.top());
        temp.pop();
    }
    cout << endl;
}
void pushAtIndex(stack<int>& s, int index, int value) {
    stack<int> temp;
    while (index-- && !s.empty()) {
        temp.push(s.top());
        s.pop();
    }
    s.push(value);
    while (!temp.empty()) {
        s.push(temp.top());
        temp.pop();
    }
}
int main(){
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    display(s);
    pushAtIndex(s, 2, 25);
    display(s);
    return 0;
}