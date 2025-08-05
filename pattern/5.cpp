#include <iostream>
using namespace std;

int main() {
     int n;
     cin >> n; // Read the number of rows
     for( int i=0;i<n;i++) {
        for(int j=n-i-1; j>0;j--) 
        {
            cout << " "; // Print leading spaces
        }
        for(int j=0; j<i+1;j++) {
            cout << "*"; // Print the current character
        }
        
        for(int j=0; j<i;j++) {
            cout << "*"; // Print the current character
    }
        cout << endl; // Move to the next line after printing each row
     }
    return 0;
}