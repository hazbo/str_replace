#include <stdio.h>
#include "str_replace.h"

int main()
{
    char name[] = "Hello, World!";
    char rep[]  = "World";
    char with[] = "There";

    char *res = str_replace(name, rep, with);

    printf("\n\n\nFinal Result: %s\n\n",res);

    return 0;
}