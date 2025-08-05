#include <stdio.h>
#include <string.h>

int main() {
    char str[100] ;
    char word[100];
    gets(str); // Read the string
    gets(word); // Read the word to count
    // Initialize the count to 0
    // Break string by space using strtok
    char *token;
    int count = 0;

    // Break string by space using strtok
    token = strtok(str, " ");
    while (token != NULL) {
        if (strcmp(token, word) == 0) {
            count++;
        }
        token = strtok(NULL, " ");
    }

    printf("'%s' appeared %d times.\n", word, count);
    return 0;
}
