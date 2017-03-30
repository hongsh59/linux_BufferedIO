#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <string.h>

void main() 
{

   FILE *stream;

   struct my_info{
         char name[20];
         unsigned int age;
         unsigned int height;
   } mi;

   strcpy(mi.name, "Gild Dong");
   mi.age = 20;
   mi.height = 180;
  
   stream = fopen("test10", "w");
   fwrite(&mi, sizeof(struct my_info), 1, stream);
   fclose(stream); 


   stream = fopen("test10", "r");
   fread(&mi, sizeof(struct my_info), 1, stream);
   fclose(stream);

   printf(" name =%s \n  age=%d \n height = %d \n",
            mi.name,  mi_age,  mi.height);
 
}