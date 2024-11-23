#include <stdio.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch >= 'a' && ch <= 'z') {
        printf("The character '%c' is a lowercase letter\n", ch);
    } else {
        printf("The character '%c' is not a lowercase letter\n", ch);
    }

    return 0;
}
