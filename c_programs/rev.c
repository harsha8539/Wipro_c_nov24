#include <stdio.h>

void printReverse(float arr[], float len){
    
    for(int i = len - 1;i >= 0;i--)
        printf("%.2f ", arr[i]);
}

int main()
{
    float arr[] = {10.0f, 20.0f, 30.0f, 40.0f, 50.0f, 60.0f};
    
    float len = sizeof(arr)/sizeof(arr[0]);
    
    printf("Array in Reverse:\n");
    printReverse(arr, len);

    return 0;
}