#include <iostream>
using namespace std;

//CountPathMaze 
int countPaths(int m, int n) {
if (m == 1 || n == 1) {
    return 1;
}
return countPaths(m - 1, n) + countPaths(m, n - 1);
}

int main() {
int m = 3; // number of rows
int n = 3; // number of columns
int totalPaths = countPaths(m, n);
cout << "Total paths from top-left to bottom-right: " << totalPaths << endl;
return 0;
}
