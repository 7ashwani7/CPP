//Find the occurrence of the first and last occurrence of an element using recursion
#include <iostream>
using namespace std;
int first = -1;
int last = -1;
void getIndex(string str, char el, int index) {
    if (index == str.length()) {
        return;
    }
    if (str[index] == el) {
        if (first == -1) {
            first = index;
        } else {
            last = index;
        }
    }
    getIndex(str, el, index + 1);
} 
int main() {
    string str = "hello world";
    char el = 'o';
    getIndex(str, el, 0);
    cout << "First occurrence of '" << el << "' is at index: " << first << endl;
    cout << "Last occurrence of '" << el << "' is at index: " << last << endl;
    return 0;
}


