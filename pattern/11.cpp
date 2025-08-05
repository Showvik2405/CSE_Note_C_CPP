#include <iostream>
using namespace std;

int main() {
    int n ;
     cin >> n; // Read the number of rows
    for( int i=0 ;i<n;i++) {
        for (int j=n -i ; j>0 ;j-- ) {
            cout << "*"; // Print leading spaces
        }
        cout << endl; // Move to the next line after printing each row  
    } 
    return 0;
}