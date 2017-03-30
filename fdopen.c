#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

void main() 
{
   FILE *stream;
   int fd;

   fd = open("test", O_RDONLY);

   stream = fdopen("fd", "r");

   fclose(stream);
}