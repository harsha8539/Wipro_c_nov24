#include<stdio.h>

int main() {
    int num,digit,largest=0,smallest=9;

    printf("enter a number ");
    scanf("%d",&num);

    if(num < 0) {
        num = -num;
    }

    while(num > 0) {
        digit = num % 10;

        if(digit > largest) {
            largest = digit;
        }

        if(digit < smallest) {
            smallest = digit;
        }

        num = num /10;
    }

   printf("Largest digit: %d\n", largest);
    printf("Smallest digit: %d\n", smallest);

    
}