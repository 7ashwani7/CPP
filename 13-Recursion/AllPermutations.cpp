//Print all the permutations of a string.
#include <iostream>
#include <string>
using namespace std;

void permutations(string str, int index, string perm) {
if (str.length() == 0) {
    cout << perm << endl;
    return;
}
for (int i = 0; i < str.length(); i++) {
    char ch = str[i];
    string rest = str.substr(0, i) + str.substr(i + 1);
    permutations(rest, index + 1, perm + ch);
}
}

int main() {
permutations("abc", 0, "");
return 0;
}
