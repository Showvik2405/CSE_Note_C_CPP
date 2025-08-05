#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "hello";
    char rev[100];
    int len = strlen(str);
    
    for (int i = 0; i < len; i++) {
        rev[i] = str[len - 1 - i];
    }
    
    rev[len] = '\0'; // ❗null terminator here

    printf("Reversed string: %s\n", rev);
    return 0;
}
