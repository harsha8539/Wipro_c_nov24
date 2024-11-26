#include <stdio.h>

int main() {
    float fArray[] = {2.2f, 4.4f, 1.5f, 9.1f, 6.75f};

    
    printf("fArray: %p\n",fArray);
    printf("fArray+1: %p\n",fArray+1);
    printf("fArray-1: %p\n",fArray-1);
    printf("fArray+2: %p\n",fArray+2);

   
  
    printf("*fArray: %f\n",*fArray);
    printf("*fArray+1: %f\n",*fArray+1);
    printf("*fArray + *fArray: %f\n",*fArray + *fArray);

  
    printf("&fArray: %p\n",&fArray);
    printf("&fArray+1: %p\n",&fArray+1);
    printf("&fArray-1: %p\n",&fArray-1);
    printf("&fArray+2: %p\n",&fArray+2);

    
}



