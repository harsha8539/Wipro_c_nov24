#include <stdio.h>

int main() {
    int num, digit, position = 1, evenSum = 0;

    
    printf("Enter a number: ");
    scanf("%d", &num);

    
    if (num < 0) {
        num = -num;
    }

    
    while (num > 0) {
        digit = num % 10; 

        
        if (position % 2 == 0) {
            evenSum += digit; 
        }

        num = num / 10; 
        position++;     
    }

    
    printf("Sum of digits in even positions: %d\n", evenSum);

    return 0;
}
