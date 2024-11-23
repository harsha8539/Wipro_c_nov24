#include <stdio.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z') {
        printf("The character '%c' is an uppercase letter.\n", ch);
    } else {
        printf("The character '%c' is not an uppercase letter.\n", ch);
    }

    return 0;
}
