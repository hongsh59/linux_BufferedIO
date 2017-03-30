#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

void main() 
{

   FILE *stream;
  
   stream = fopen("test5", "a+");
 
   fputs(stream);

   fclose(stream); 

}