#include <stdio.h>
#include <string.h>

int main() {
    char str[100], *token;

    printf("Enter a string with delimiters (e.g., words separated by spaces): ");
    scanf(" %[^\n]", str);

    token = strtok(str, " "); 
    while (token != NULL) {
        printf("Token: %s\n", token);
        token = strtok(NULL, " ");
    }

    return 0;
}
