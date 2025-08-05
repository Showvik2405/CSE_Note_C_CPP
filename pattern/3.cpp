#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n; // Read the number of rows
    // Loop to print the pattern
    for (int i = 0; i < n; i++) {
        int num = n; // Initialize the number to be printed
        for (int j = n-i ; j >0; j--) {
           cout <<num;
           num= num -1;
            }
        cout << endl; // Move to the next line after printing each row
        }

    return 0;
}