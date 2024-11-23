#include <stdio.h>

int main() {
    int num, count = 0;

    printf("enter a number");
    scanf("%d",&num);

    if (num == 0) {
        count = 1;
    } else {
        if (num < 0) {
            num = -num;
        }

        while (num > 0) {
            num = num /10;
            count++;
        }
    }

    printf("the number of digit is: %d\n",count);
}