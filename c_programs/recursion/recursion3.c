#include <stdio.h>


int findSmallest(int arr[], int n, int index) {
    if (index == n - 1) {
        return arr[index]; // Base case: if it's the last element, return it
    }

    
    int smallestInRest = findSmallest(arr, n, index + 1);

   
    return (arr[index] < smallestInRest) ? arr[index] : smallestInRest;
}

int main() {
    int n;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements of the array:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int smallest = findSmallest(arr, n, 0); // Start from index 0
    printf("The smallest number in the array is: %d\n", smallest);

    return 0;
}
