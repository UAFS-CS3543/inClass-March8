#include <stdio.h>
#include "funlib.h"

#define SIZE 100

int main(){
   char buffer[SIZE];
   int len;

   printf("Enter string: ");
   scanf("%s",buffer);

   len = length(buffer);
   printf("%s(%d)\n",buffer,len);

   len = lengthWithPointers(buffer);
   printf("%s(%d)\n",buffer,len);
   
   return 0;
}
