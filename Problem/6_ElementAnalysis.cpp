//Program to find which element is repeated in the array and which is not.
#include<iostream>
#include<unordered_map>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    unordered_map<int, int> freq;
    for(int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    cout << "Repeated elements: ";
    bool foundRepeated = false;
    for(auto &p : freq) {
        if(p.second > 1) {
            cout << p.first << " ";
            foundRepeated = true;
        }
    }
    if(!foundRepeated) cout << "None";
    cout << endl;

    cout << "Non-repeated elements: ";
    bool foundNonRepeated = false;
    for(auto &p : freq) {
        if(p.second == 1) {
            cout << p.first << " ";
            foundNonRepeated = true;
        }
    }
    if(!foundNonRepeated) cout << "None";
    cout << endl;

    return 0;
}