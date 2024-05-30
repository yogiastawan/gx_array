#include <stdio.h>

#include "gx_array.h"

int main(int argc, char const *argv[])
{
    // print integer
    int array[10] = {0, 1, 3, 57, 11, 13, 17, 19, 23, 29};
    gx_array_print(&array, 10, INT);

    printf("\n");

    // print string
    char *string[3] = {"hiii", "array", "world"};
    gx_array_print(&string, 3, STR);
    return 0;
}
