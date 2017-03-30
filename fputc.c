#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

void main() 
{

   int c;

   FILE *stream1;
   FILE *stream2;
  
   stream1 = fopen("test3", "r");
   stream2 = fopen("test4", "w");

   while(1) {

         c = fgetc(stream1);

         if(c==EOF) {
                break;
         }
         fputc(c, stream2;
    } 

}