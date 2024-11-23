#include <stdio.h>

int main() {
    char ch;
    printf("Enter an uppercase letter: ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z') {
        ch = ch + ('a' - 'A'); 
        printf("The lowercase letter is: %c\n", ch);
    } else {
        printf("The character is not an uppercase letter.\n");
    }

    return 0;
}
