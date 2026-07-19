#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void display(queue<int> q)
{
    while(!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}
// Function to reverse the queue using recursion
void reverseRec(queue<int>& q)
{
    if(q.empty()) return;
    int front = q.front();
    q.pop();
    reverseRec(q);
    q.push(front);
}
// Function to reverse the queue using a stack
void reverseStack(queue<int>& q)
{
    stack<int> s;
    while(!q.empty())
    {
        s.push(q.front());
        q.pop();
    }
    while(!s.empty())
    {
        q.push(s.top());
        s.pop();
    }
}
int main()
{
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    display(q);
    reverseRec(q);
    display(q);
    reverseStack(q);
    display(q);
    return 0;
}
