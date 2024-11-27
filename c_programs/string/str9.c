#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int n;

    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter the second string: ");
    scanf("%s", str2);

    printf("Enter the number of characters to compare: ");
    scanf("%d", &n);

    if (strncmp(str1, str2, n) == 0)
        printf("The first %d characters are equal.\n", n);
    else
        printf("The first %d characters are not equal.\n", n);

    return 0;
}
