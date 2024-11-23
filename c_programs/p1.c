#include <stdio.h>
#include <math.h>

int isprime(int n) {
    if (n <= 1) {
        return 0;
    }
    for(int i = 2; i <= sqrt(n); i++) {
        if(n % i == 0) {
            return 0;
        }
    }
    //retrun 1;
}

int main() {
    int num;
    printf("enter a number : ");
    scanf("%d",&num);

    if(isprime(num))
    {
        printf("%d is a prime number.\n",num);
    } else {
        printf("%d is not a prime number.\n",num);
    }

    return 0;
}