
int length(char str[]){
   int index=0;

   while(str[index]!='\0'){
      index++;
   }
   return index;
}

int lengthWithPointers(char *str){
    int count=0;

    while(*str!='\0'){
       count++;
       str++;
    }
    return count;
}
