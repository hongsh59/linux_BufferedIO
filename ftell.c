#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <string.h>

void main() 
{

   FILE *stream;
   long a;

    
   stream = fopen("test5", "r");

   fseek(stream, 3, SEEK_SET);

   a = ftell(stream);

   printf("À§Ä¡ : %ld \n", a);

   fclose(stream);
  
}