#include<stdio.h>


int duplicates(int arr[] , int n)
{
    if(n==0 || n==1)
    return n;

    int temp[n];

    int j = 0 ;
    for(int i=0;i<n-1;i++)
    if(arr[i] != arr[i + 1])
    temp[j++] = arr[n-1];

    for(int i = 0; i<j; i++)
    arr[i] = temp[i];

    return 1;
}
int main()
{
    int arr[] = {10,20,30,40,30,50,20};
    int n =  sizeof(arr) / sizeof(arr[0]);

    n= duplicates(arr,n);

    for(int i = 0; i < n;i++)
    printf("%d" , arr[i]);
}