#include <stdio.h>
#include "fibo.h"

int main() {
    int n;

    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Number of terms must be positive.\n");
        return 1;
    }

    int result[n]; 
    
    generate_fibonacci(n, result);

    
    printf("Fibonacci series with %d terms:\n", n);
    for (int i = 0; i < n; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    return 0;
}
