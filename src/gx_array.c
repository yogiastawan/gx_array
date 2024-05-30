#include <stdio.h>
#include "gx_array.h"

void gx_array_print(const void *array, unsigned int len, ArrayType type)
{
    printf("[");
    for (unsigned int i = 0; i < len; i++)
    {
        switch (type)
        {
        case CHAR:
            printf("%c", ((char *)array)[i]);
            break;
        case STR:
            printf("%s", ((char **)array)[i]);
            break;
        case INT:
            printf("%d", ((int *)array)[i]);
            break;
        case UINT:
            printf("%u", ((unsigned int *)array)[i]);
            break;
        case FLOAT:
            printf("%f", ((float *)array)[i]);
            break;
        case HEX:
            printf("%x", ((int *)array)[i]);
            break;
        case HEX_CAP:
            printf("%X", ((int *)array)[i]);
            break;
        case OCTAL:
            printf("%o", ((int *)array)[i]);
            break;
        case SCIENTIFIC:
            printf("%e", ((double *)array)[i]);
            break;
        case SHORT:
            printf("%g", ((double *)array)[i]);
            break;
        default:
            printf("%d", ((int *)array)[i]);
            break;
        }
        if (i < len - 1)
        {
            printf(", ");
        }
    }
    printf("]");
}
