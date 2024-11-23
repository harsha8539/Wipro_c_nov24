//Count the number of Even digits in a number


#include <stdio.h>

int main() {
    int num, digit, evenCount = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num < 0) {
        num = -num;
    }
    while (num > 0) {
        digit = num % 10; 

       
        if (digit % 2 == 0) {
            evenCount++;
        }

        num = num / 10; 
    }
    printf("Number of even digits: %d\n", evenCount);
    return 0;
}
