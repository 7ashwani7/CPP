// FriendsPairingProblem
#include <iostream>
using namespace std;
    int countPairings(int n) {
    if (n == 0 || n == 1 || n == 2) {
        return n;
    }
    return countPairings(n - 1) + (n - 1) * countPairings(n - 2);
}
int main() {
    int n = 4; // Number of friends
    cout << "Number of ways to pair " << n << " friends: " << countPairings(n) << endl;
    return 0;
}


