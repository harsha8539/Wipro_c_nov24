#include <stdio.h>
#include <string.h>

int main() {
    char str[100], ch;
    printf("Enter a string: ");
    scanf("%s", str);

    printf("Enter a character to find: ");
    scanf(" %c", &ch);

    char *result = strrchr(str, ch);
    if (result)
        printf("Last occurrence of '%c' is at position: %ld\n", ch, result - str + 1);
    else
        printf("Character '%c' not found.\n", ch);

    return 0;
}
