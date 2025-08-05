#include <stdio.h>
#include <string.h>


int main() {
    char x[100], y[100]; 
    int n = 0, m = 0 ,flag = 0;
    gets(x); // Read the first array
    gets(y); // Read the second array
    for( int i = 0; x[i] != '\0'; i++) {
        m++;
        }
    for( int i = 0; y[i] != '\0'; i++) {
        n++;    
    }
    
    if ( m ==n){
        for (int i = 0; i < m; i++) {
            if (x[i] != y[i]) {
                flag = 1; // Set flag if characters differ
               // break; // Exit loop on first difference
                
            }
            else {
                flag = 0; // Set flag if characters match
                
            }
            if (flag == 0) {
                printf("Both strings are equal\n");
            } else {
                printf("Both strings are not equal\n");
        }
       
    return 0;
}
    }
}