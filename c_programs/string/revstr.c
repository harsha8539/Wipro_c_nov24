#include <string.h>  

void revstr(char *str1) 
{ 
  
  int i, len, temp; 
  len = strlen(str1); // use strlen() to get the length of str string 

  // use for loop to iterate the string 
  for (i = 0; i < len/2; i++) 
  { 
  
   temp = str1[i]; 
   str1[i] = str1[len - i - 1]; 
   str1[len - i - 1] = temp; 
  } 
 } 

int main() 
{ 
  char str[50]="priyanka";  


  printf (" \n Before reversing the string: %s \n", str); 

  
  revstr(str); 
  printf (" After reversing the string: %s", str); 
 }