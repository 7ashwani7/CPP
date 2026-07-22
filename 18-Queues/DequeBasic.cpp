#include <iostream>
#include<deque>
using namespace std;
int main()
{
    deque<int> dq;
    cout << "Is deque empty? " << dq.empty() << endl; // Output: 1 (true)
    dq.push_back(10);
    dq.push_back(20);
    dq.push_back(30);
    dq.push_back(40);
    dq.push_back(50);
    cout << "Front element: " << dq.front() << endl; // Output: 10
    cout << "Back element: " << dq.back() << endl;   // Output: 50
    cout << "Deque size: " << dq.size() << endl;     // Output: 5
    dq.pop_front();
    cout << "Front element after pop_front: " << dq.front() << endl; // Output: 20
    dq.pop_back();
    cout << "Back element after pop_back: " << dq.back() << endl;   // Output: 40
    return 0;
}