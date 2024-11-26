#include <stdio.h>
#include "fibo.h"


void generate_fibonacci(int n, int *result) {
    if (n <= 0) return;

    result[0] = 0;
    if (n == 1) return;

    result[1] = 1;

    for (int i = 2; i < n; i++) {
        result[i] = result[i - 1] + result[i - 2];
    }
}
