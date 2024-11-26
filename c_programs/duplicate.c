#include <stdio.h>

void duplicates() {
    
}

int main() {
    int arr[] = {11, 22, 22, 33, 44, 44, 55};
    int size = sizeof(arr) / sizeof(arr[0]);  // Calculate the size of the array

    
    printf("Original Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    
    duplicates(arr, &size);

    
    printf("removing duplicates: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    
}
