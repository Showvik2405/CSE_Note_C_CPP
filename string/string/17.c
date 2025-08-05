#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "Hello";
    char str2[] = " World";
    char merged[100];  // Make sure it's big enough

    // Copy str1 to merged
    strcpy(merged, str1);

    // Concatenate str2 to merged
    strcat(merged, str2);

    printf("Merged string: %s\n", merged);
    return 0;
}
