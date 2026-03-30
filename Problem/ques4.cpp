//Matrix Rotation at 180 Degrees clockwise
#include <iostream>
using namespace std;

int main() {
    int n, m;
    cout << "Enter number of rows and columns: ";
    cin >> n >> m;
    int mat[100][100]; // assuming max size 100x100

    cout << "Enter matrix elements:\n";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> mat[i][j];

    cout << "Matrix after 180 degree rotation:\n";
    for (int i = n - 1; i >= 0; i--) {
        for (int j = m - 1; j >= 0; j--)
            cout << mat[i][j] << " ";
        cout << endl;
    }
    return 0;
}