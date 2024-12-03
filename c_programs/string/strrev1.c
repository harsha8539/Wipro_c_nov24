#include<stdio.h>
#include <string.h>  


void uppercase_to_lowercase(char *str)
{
    while(*str != '\0'){
        *str = tolower(*str);
        str++;
    }
}
int main(){
char str[] = "harshad";
  printf("org string %s\n",str);
  uppercase_to_lowercase(str);
  printf("another str: %s\n",str);

}

 

  


  
  
 
 