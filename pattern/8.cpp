#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;

    int width = 2 * n - 1; // Total columns

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < width; j++) {
            // Left edge of diamond
            if (j == n - i-1 || j == n - 1 + i || i == n - 1) {
                cout << "2";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
