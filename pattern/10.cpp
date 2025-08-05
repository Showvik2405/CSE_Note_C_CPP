#include <iostream>
using namespace std;

int main() {
    int  n;
    cin >> n; // Read the number of rows
    // Loop to print the pattern
    for (int i = 0; i < n; i++) {
        int num = 1; // Initialize the number to be printed
        // Step 1: Print spaces 
        for (int j = 0 ; j < i ; j++ ) {
            cout << " ";
        }
        // Step 2: Print dots
        for (int j = n-i ; j > 0; j--) {
            cout << num << " "; // Print the current number
            num++;
        }
        cout << endl; // Move to the next line after printing each row
    }
    return 0;
}