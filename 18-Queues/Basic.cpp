#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue<int> q;
    cout << "Empty queue size: " << q.size() << endl; // Output: 0
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    cout << "Front element: " << q.front() << endl; // Output: 10
    cout << "Back element: " << q.back() << endl;   // Output: 30
    cout << "Queue size: " << q.size() << endl;     // Output: 3
    q.pop();
    cout << "Front element after pop: " << q.front() << endl; // Output: 20
    return 0;
}
