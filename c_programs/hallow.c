#include <stdio.h>

int main() {
    int numberOfLines;
    printf("Enter the size of the square: ");
    scanf("%d", &numberOfLines);

    for (int i = 1; i <= numberOfLines; i++) {
        for (int j = 1; j <= numberOfLines; j++) {
            if (i == 1 || i == numberOfLines || j == 1 || j == numberOfLines) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}
