#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

void main() 
{
   FILE *stream;
   FILE *stream2;

  
   stream = fdopen("test", "r");
   stream2 = fopen("test2", "r");

   fcloseall();
}