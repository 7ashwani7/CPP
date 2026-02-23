//Print the spiral order matrix as output for a given matrix of numbers.
#include <iostream>
using namespace std;

int main() {
        int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int rows = 3;
    int cols = 3;
    int top = 0, bottom = rows - 1, left = 0, right = cols - 1;
    
    while (top <= bottom && left <= right) {
        // Print top row
        for (int i = left; i <= right; i++) {
            cout << matrix[top][i] << " ";
        }
        top++;

        // Print right column
        for (int i = top; i <= bottom; i++) {
            cout << matrix[i][right] << " ";
        }
        right--;

        // Print bottom row (if exists)
        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                cout << matrix[bottom][i] << " ";
            }
            bottom--;
        }

        // Print left column (if exists)
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                cout << matrix[i][left] << " ";
            }
            left++;
        }
    }
    return 0;
}
