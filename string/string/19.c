#include <stdio.h>
#include <string.h>
int main() {
    char x[100], y[100];
    int c = 0;
    gets(x); // Read the first array
    gets(y); // Read the second array
    for (int i = 0; x[i] != '\0'; i++) {
        for (int j = 0; y[j] != '\0'; j++) {
            if (x[i+j] == y[j]) {
                c++; // Increment count if characters match
                break; // Exit inner loop on first match
            }
        }

}
printf("Count of characters in '%s' that are present in '%s': %d\n", x, y, c);
    return 0;
}