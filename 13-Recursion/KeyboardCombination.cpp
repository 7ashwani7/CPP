//  Print keypad combination
//(0 -> .;
// 1 -> abc
// 2 -> def
// 3 -> ghi
// 4 -> jkl
// 5 -> mno
// 6 -> pqrs
// 7 -> tu
// 8 -> vwx
// 9 -> yz
// )
#include <iostream>
using namespace std;
string keypad[] = {".", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tu", "vwx", "yz"};
void printCombination(string str, int index, string res) {
    if (index == str.length()) {
        cout << res << endl;
        return;
    }
    for(int i=0; i<keypad[str[index]-'0'].length(); i++) {
    char curr = keypad[str[index]-'0'][i];
    printCombination(str, index + 1, res + curr);
    }
}
int main() {
    string str = "23";
    printCombination(str, 0, "");
    return 0;
}


