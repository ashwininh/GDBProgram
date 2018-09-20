#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
   char *str=(char *) malloc(15);
   strcpy(str, "Hello_HAi");
   printf("str =%s\t Address = %p\n",str,str);
   free(str);
   //str=NULL;
   strcpy(str, "Hello");
   printf("str =%s\t Address = %p\n",str,str);

    return 0;
}
