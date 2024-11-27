#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];

    printf("enter a string ");
    scanf("%s",str);

    int length = strlen(str);

    printf("the length of string is %d\n",length);
}