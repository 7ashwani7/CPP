//Matrix rotation anti-clockwise at 90 degrees
#include <iostream>
using namespace std;

// Function to rotate matrix by 90 degrees anti-clockwise
void rotateMatrix90AntiClockwise(int mat[][100], int n) {
    // Transpose the matrix
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            swap(mat[i][j], mat[j][i]);
        }
    }
    // Reverse each column
    for (int j = 0; j < n; j++) {
        for (int i = 0, k = n - 1; i < k; i++, k--) {
            swap(mat[i][j], mat[k][j]);
        }
    }
}

int main() {
    int n;
    cout << "Enter size of square matrix: ";
    cin >> n;
    int mat[100][100];

    cout << "Enter matrix elements:\n";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> mat[i][j];
    cout << "Matrix before 90 degree anti-clockwise rotation:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << mat[i][j] << " ";
        cout << endl;
    }

    rotateMatrix90AntiClockwise(mat, n);

    cout << "Matrix after 90 degree anti-clockwise rotation:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << mat[i][j] << " ";
        cout << endl;
    }
    return 0;
}