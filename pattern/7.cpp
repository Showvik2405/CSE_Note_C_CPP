#include <iostream>
using namespace std;

int main() {
     int n , p=7, q=5;
     cin >> n; // Read the number of rows
        for( int i=1;i<=n;i++) {
            p=7, q=5; // Reset p and q for each row 
            for(int j=1; j<=i;j++) {
                if( i%2 == 0) {
                    cout << p << " "; // Print p for even rows
                    p = p+7; // Double p for next even row
                } else {
                    cout << q << " "; // Print q for odd rows
                    q= q+5; // Triple q for next odd row
                }
            }
            cout << endl; // Move to the next line after printing each row
        }


    return 0;
}