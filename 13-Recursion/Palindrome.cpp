// To ckeck if a string is a palindrome, by using recursion
#include <iostream>
using namespace std;

bool isPalindrome(string s) {
    if (s.length() <= 1) {
        return true;
    }

    if (s[0] != s[s.length() - 1]) {
        return false;
    }

    return isPalindrome(s.substr(1, s.length() - 2));
}
    int main() {
    string word = "radar";
    if (isPalindrome(word)) {
        cout << word << " is a palindrome." << endl;
    } else {
        cout << word << " is not a palindrome." << endl;
    }
}




