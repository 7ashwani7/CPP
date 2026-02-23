#include <iostream>
#include <string>
using namespace std;

//Print all the subsequences of a string.
void printSubsequences(string str, string subseq) {
if (str.empty()) {
    cout << subseq << endl;
    return;
}
char ch = str[0];
printSubsequences(str.substr(1), subseq + ch);
printSubsequences(str.substr(1), subseq);
}

int main() {
printSubsequences("abc", "");
return 0;
}