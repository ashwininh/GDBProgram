#include "Hello.h"
int main(int argc, char *argv[])
{
    char str[] = "hello";
    int a=3,b=5,c,i;
    c=fun(a,b);
    printf("str =%s\tc=%d\n",str,c);
    printf("argc =%d\n",argc);
    for(i=0;i<argc;i++)
      printf("argv[%d] =%s\t",i,argv[i]);
    return 0;
}
