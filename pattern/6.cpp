#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n; // Read the number of rows
    // Loop to print the pattern
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
           if (i % 2 == 0) {
                cout << "2"; // Print '*' for even rows
            } else {
                cout << "1"; // Print space for odd rows
            }
        }
        cout << endl; // Move to the next line after printing each row
    }
    return 0;
}