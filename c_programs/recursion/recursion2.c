#include <stdio.h>
int sum(int num) {
    if (num == 0) {
        return 0;
    }
    return (num % 10) + sum(num / 10);
}
int main() {
    int num;

    printf("enter a number");
    scanf("%d",&num);

    if(num < 0) {
        num = - num;
    }
    printf("sum of dig: %d\n",sum(num));
}