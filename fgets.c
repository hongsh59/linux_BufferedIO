#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
$include <limits.h>

void main() 
{

   FILE *stream;
   char buf[LINE_MAX];
  
   stream = fdopen("test", "r");

   while(1) {

            if (fgets(buf, LINE_MAX, stream) == NULL){
                break;
            }
            printf("c=%c\n", (char) c);
     } 

     fclose(stream);
}