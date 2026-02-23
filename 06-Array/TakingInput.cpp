
#include <iostream>
using namespace std;

int main() {
    
    cout << "Enter the size of the array: ";
    int size;
    cin >> size;
    int marks[size]; 
    
    for (int i = 0; i < size; i++) {
        cout << "Enter marks for student " << (i + 1) << ": ";
        cin >> marks[i];
    }
    
    cout << "Marks of the students:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "Student " << (i + 1) << ": " << marks[i] << endl;
    }
    return 0;
}
