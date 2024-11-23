// Find sum of Odd placed Odd digits in a number

#include <stdio.h>
#include <stdlib.h>


int main(int argCount, char *args[])
{
    
    if (argCount < 2) {
        printf("Please provide an input number.\n");
        return 1;
    }

    int inputNumber = atoi(args[1]);
    int sumOfOddPlacedOddDigits = 0, position = 1, remainderDigit;

    printf("User given number is %d \n", inputNumber);

    while (inputNumber != 0) {
        remainderDigit = inputNumber % 10; 
        inputNumber = inputNumber / 10;   

        
        if (position % 2 == 1 && remainderDigit % 2 == 1) {
            sumOfOddPlacedOddDigits += remainderDigit;
        }

        position++; 
    }

    printf("Sum of Odd placed Odd digits is %d\n", sumOfOddPlacedOddDigits);

    return 0;
}
