#include <stdio.h>
#include <string.h>

int main() {
    char str[100], substr[100];

    printf("Enter the main string: ");
    scanf("%s", str);

    printf("Enter the substring to find: ");
    scanf("%s", substr);

    char *result = strstr(str, substr);
    if (result)
        printf("Substring found at position: %ld\n", result - str + 1);
    else
        printf("Substring not found.\n");

    return 0;
}
