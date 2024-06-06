

#include "gx_array.h"

int main(int argc, char const *argv[]) {
    // print integer
    int array[10] = {0, 1, 3, 57, 11, 13, 17, 19, 23, 29};
    GX_ARRAY_PRINT(array, 10, % d);

    printf("\n");

    // print string
    char *string[3] = {"hiii", "array", "world"};
    GX_ARRAY_PRINT(string, 3, %s);
    return 0;
}
