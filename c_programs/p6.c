#include <stdio.h>
#include <math.h>

int main() {
    int n, M;
    double sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Enter the number of terms (M): ");
    scanf("%d", &M);

    for (int i = 0; i < M; i++) {
        sum += pow(n, i); 
    }

    printf("The sum of the series is: %.2lf\n", sum);
    return 0;
}
