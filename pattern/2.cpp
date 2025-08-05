#include <iostream>
using namespace std;

int main() {
    int n;
   
    cin >> n; // Read the number of rows
    // Loop to print the pattern
    for (int i = 0; i < n; i++) {
             int num = 1; // Initialize the number to be printed
        for (int j = 0; j <  i + 1; j++) {
            cout << num ; // Print leading spaces
            num++;
        }
        cout << endl; // Move to the next line after printing each row
    }
    return 0;
}