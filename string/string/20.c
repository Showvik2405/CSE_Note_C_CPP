#include <stdio.h>
#include <string.h>

int main() {
    char x[100] = "hello";     // original string
    char y[100];               // to store reversed x
    int length = strlen(x);

    // Reverse x into y
    for (int i = 0; i < length; i++) {
        y[i] = x[length - 1 - i];
    }
    y[length] = '\0'; // null terminate the reversed string

    // Merge y into x (append reversed part to x)
    for (int j = 0; y[j] != '\0'; j++) {
        x[length + j] = y[j];
    }
    x[length + strlen(y)] = '\0'; // null terminate the merged result

    // Print the final string
    printf("%s\n", x); // Output: helloolleh

    return 0;
}
