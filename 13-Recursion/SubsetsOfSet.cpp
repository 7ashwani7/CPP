// Print all subsets of a set
#include <iostream>
using namespace std;
void printSubsets(int set[], int subset[], int index, int subsetIndex) {
    if (index == 3) { // Assuming set size is 3 for simplicity
        cout << "[";
        for (int i = 0; i < subsetIndex; i++) {
            cout << subset[i];
            if (i < subsetIndex - 1) cout << ",";
        }
        cout << "]" << endl;
        return;
    }
    // Include the current element
    subset[subsetIndex] = set[index];
    printSubsets(set, subset, index + 1, subsetIndex + 1);
    // Exclude the current element
    printSubsets(set, subset, index + 1, subsetIndex);
}
int main() {
int set[] = {1, 2, 3};
int subset[3]; // Temporary array to hold subsets
printSubsets(set, subset, 0, 0);
}
