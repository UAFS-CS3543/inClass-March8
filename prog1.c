#include <stdio.h>


int main(){
   char name[] = {'J','o','e'};  //Character Array
   char str[] = {'J','o','e','\0'}; //String
   char buffer[100];
   int index=0;

   printf("Enter a name: ");
   scanf("%s",buffer);

   printf("%s\n",buffer);

   //*** Accessing the String a character at a time until the null character \0
   index=0;
   while(buffer[index]!='\0'){
      printf("%c ",buffer[index]);
      index++;
   }
   printf("\n");


  return 0;
}
