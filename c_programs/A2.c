#include <stdio.h>
#include <math.h> // For sqrt() function

int main() {
    int num, sqrtValue;

    printf("Enter a number: ");
    scanf("%d", &num);

    sqrtValue = sqrt(num); // Calculate square root

    // Check if square of sqrtValue equals the number
    if (sqrtValue * sqrtValue == num) {
        printf("%d is a perfect square.\n", num);
    } else {
        printf("%d is not a perfect square.\n", num);
    }

    return 0;
}
