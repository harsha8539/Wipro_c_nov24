#include <stdio.h>

int main() {
    int num, position = 1, sum = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        num = -num; 
    }

    while (num > 0) {
        digit = num % 10; 
        if (position % 2 == 0 && digit % 2 != 0) { 
            sum += digit; 
        }
        num = num / 10; 
        position++; 
    }

    printf("The sum of even-placed odd digits is: %d\n", sum);
    return 0;
}
