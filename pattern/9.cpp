#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        // Step 1: Print spaces
        for (int j = n - i ; j > 0 ; j--) {
            cout << " ";
        }

        // Step 2: Print dots
        for (int j = 1; j <= i; j++) {
            cout << "● ";
        }

        cout << endl;
    }

    return 0;
}
