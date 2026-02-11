
#include <iostream>
#include <string>
using namespace std;

int main() {
    int size;
    cout << "Enter the number of students: ";
    cin >> size;
    string names[size];
    for (int i = 0; i < size; i++) {
        cout << "Enter name of student " << (i + 1) << ": ";
        cin >> names[i];
    }
    cout << "Names of the students:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "Student " << (i + 1) << ": " << names[i] << endl;
    }
    return 0;
}
