#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <string.h>

void main() 
{

   int c;
   fpos_t getpos;
   fpos_t setpos;
   int flag = 0;
   long size;

   FILE *stream;
    
   stream = fopen("test6", "r");


   while(1) {

     c = fgetc(stream);

     size = ftell(stream);

     fgetpos(stream, &getpos);

     if(flag == 0 && size == 13)
      setpos = getpos;

     if( c = EOF ) {
          if (flag == 1)
             break;

        flag = 1;
  
        fsetpos(stream,&setpos);
       }
       else{
   
              printf("c=%c  getpos=%ld\n", (char)c, getpos);

       }
   }

   fclose(stream);
  
}