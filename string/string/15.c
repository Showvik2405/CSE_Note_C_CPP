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
 for (int i = 0; i < len; i++) {
        
   if (str[i] == rev[i]) {
        printf("Both strings are equal\n");
        break;
    } else {
        printf("Both strings are not equal\n");
        break;
    }
}
    return 0;
}
