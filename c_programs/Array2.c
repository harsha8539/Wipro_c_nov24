#include <stdio.h>

void getSmallLarge(int arr[], int n)
{
    double smallest, largest;
    
    smallest = largest = arr[0];
    
    for(int i = 1; i < n ;i++){
        
        
        if(arr[i] < smallest) smallest = arr[i]; 
 if(arr[i] > largest) largest = arr[i]; 
        
    } 
    printf("Smallest: %lf\n",smallest);
    printf("Largest: %lf", largest); 
    
} 
int main() 
{ 
    double arr[] = {2.11, 4.22, 3.33, 2.2, 1.1, 8.1}; 
double len = sizeof(arr)/sizeof(arr[0]);
getSmallLarge(arr, len); 
    
}