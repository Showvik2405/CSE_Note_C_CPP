#include <stdio.h>
#include <string.h>

int main() {
    char x[100] = "Hello";  // Make sure x has enough space
    char y[] = " World";

    int len = strlen(x);  // Find length of x

    // Copy each character of y into x after len
    for (int i = 0; y[i] != '\0'; i++) {
        x[len + i] = y[i];
    }

    // Null terminate the merged string
    x[len ] = '\0';

    printf("Merged string: %s\n", x);
    return 0;
}
