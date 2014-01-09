#include <stdio.h>
#include "str_replace.h"

int main()
{
    char name[] = "Harry";
    char rep[]  = "y";
    char with[] = "s";
    char dest[10];

    str_replace(name, rep, with, dest);

    printf("String: %s\n", dest);

    return 0;
}