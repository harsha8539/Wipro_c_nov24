#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];

    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter the second string: ");
    scanf("%s", str2);

    if (stricmp(str1, str2) == 0)
        printf("The strings are equal (case-insensitive).\n");
    else
        printf("The strings are not equal (case-insensitive).\n");

    return 0;
}
