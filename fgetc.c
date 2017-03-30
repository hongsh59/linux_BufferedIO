#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

void main() 
{
   FILE *stream;
  
   stream = fdopen("test", "r");

   while(1) {

         c = fgetc(stream);

         if(c==EOF) {
                break;
         }
         else

            printf("c=%c\n", (char) c);
    } 

   fclose(stream);
}