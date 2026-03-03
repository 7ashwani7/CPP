// TilingProblem
#include <iostream>
using namespace std;
int countWays(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return countWays(n - 1) + countWays(n - 2);
}
int main() {
    int n = 5; // Length of the floor
    cout << "Number of ways to tile a " << n << "x1 floor: " << countWays(n) << endl;
}


