#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

void main() 
{

   int c;
   FILE *stream;
  
   stream = fdopen("test", "r");

   while(1) {

         c = fgetc(stream);

         if(c==EOF) {
                break;
         }
         else if(c=='w'){
               ungetc('a', stream);
               ungetc('b', stream);
               ungetc('c', stream);
         }
         else

            printf("c=%c\n", (char) c);
    } 

   fclose(stream);
}