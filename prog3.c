#include <stdio.h>


int main(){
   int number=20;
   int *ptr;

   ptr=&number;

   printf("number:  %d\n",number);
   printf("&number: %p\n",&number);
   printf("-------------------------\n");
   printf("ptr:     %p\n",ptr);
   printf("*ptr:    %d\n",*ptr);
   printf("&ptr:    %p\n",&ptr);

   *ptr=30;

   printf("number:  %d\n",number);
   printf("&number: %p\n",&number);
   printf("-------------------------\n");
   printf("ptr:     %p\n",ptr);
   printf("*ptr:    %d\n",*ptr);
   printf("&ptr:    %p\n",&ptr);

   return 0;
}
