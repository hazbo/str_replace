#include <string.h>
#include <stdlib.h>
#include <stdio.h> // remove after debugging
#include "str_replace.h"

char *str_replace(char *orig, char *rep, char *with)
{
    int len_orig;
    int len_rep;
    int len_with;
    int count;

    if (!orig)
        return NULL;

    if (strstr(orig, rep) != NULL) {
        if (!rep) {
            rep = "";
        }

        if (!with) {
            with = "";
        }

        len_rep  = strlen(rep);
        len_with = strlen(with);
        len_orig = strlen(orig);

        for (int i = 0; i < len_orig; i++) {

        }
    } else {
        return orig;
    }

    return orig;
}