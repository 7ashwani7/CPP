//Input a string from the user. Create a new string called ‘result’ in which you 
 //will replace the letter ‘e’ in the original string with letter ‘i’. 
#include <iostream>
#include <string>
using namespace std;
int main() {
    string a, result;
    cout << "Enter a string: ";
    getline(cin, a);
    for (int i = 0; i < a.length(); i++) {
        if (a[i] == 'e') {
            result += 'i';
        } else {
            result += a[i];
        }
    }
    cout << "Result string: " << result << endl;
    return 0;
}