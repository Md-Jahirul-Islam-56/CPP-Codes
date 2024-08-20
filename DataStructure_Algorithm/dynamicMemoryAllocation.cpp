#include<bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    // Allocate memory for an integer array of size n
    int* arr = new int[n];

    // Initialize the array
    for (int i = 0; i < n; i++) {
        arr[i] = i;
    }

    // Print the array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Deallocate memory
    delete[] arr;

    return 0;
}
