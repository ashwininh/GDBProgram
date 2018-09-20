#include "Hello.h"
void fun1()
{
int n = 9, div = 0;
   
    // wrong logic
    // number is divided by 0,
    // so this program abnormally terminates
    div = n/0;
     
    printf("resut = %d", div);
}
