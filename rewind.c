#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <string.h>

void main() 
{

   FILE *stream;
   int c;

    
   stream = fopen("test5", "a+");

   rewind(stream);

   c = fgetc(stream);

   printf("c = %c \n", (char)c);

   fclose(stream);
  
}