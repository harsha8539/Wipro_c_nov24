#include<stdio.h>
#include<string.h>

int main() {
    char sam1[100], sam2[200];

    printf("enter the 1st string  ");
    scanf("%s",sam1);

    printf("enter the 2nd string  ");
    scanf("%s",sam2);

    strcat(sam1,sam2);

    printf("the concat string %s\n ",sam1);
}