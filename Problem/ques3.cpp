//Generate Magic Square of Odd Order using array
#include <iostream>
using namespace std;

void generateMagicSquare(int n) {
    if (n % 2 == 0) {
        cout << "Order must be odd!" << endl;
        return;
    }

    int magic[25][25] = {0};
    int num = 1;
    int i = 0, j = n / 2;

    while (num <= n * n) {
        magic[i][j] = num++;
        int newi = (i - 1 + n) % n;
        int newj = (j + 1) % n;
        if (magic[newi][newj]) {
            i = (i + 1) % n;
        } else {
            i = newi;
            j = newj;
        }
    }

    // Print the magic square
    for (int r = 0; r < n; r++) {
        for (int c = 0; c < n; c++) {
            cout << magic[r][c] << "\t";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter odd order of magic square: ";
    cin >> n;
    generateMagicSquare(n);
    return 0;
}