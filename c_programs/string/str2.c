#include<stdio.h>
#include<string.h>

int main()
{
    char ori[100],copy[100];

    printf("enter org string" );
    scanf("%s",ori);

    strcpy(copy,ori);

    printf("ori string %s\n",ori);
     printf("copy string %s\n",copy);
     
}