// Print all unique subsequences of a string
#include <iostream>
#include <string>
using namespace std;
void printUniqueSubsequences(string str, string subseq, int index) {
if (index == str.length()) {
    cout << subseq << endl;
    return;
}
char ch = str[index];
// Include the current character
printUniqueSubsequences(str, subseq + ch, index + 1);
// Exclude the current character
printUniqueSubsequences(str, subseq, index + 1);
}
    
int main() {
string str = "abc";
printUniqueSubsequences(str, "", 0);
return 0;

}
