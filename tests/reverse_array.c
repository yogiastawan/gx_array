#include <assert.h>
#include <stdio.h>

#include "gx_array.h"

int main(int argc, char const *argv[]) {
    int array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int result[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    printf("Before reverse:\n");

    GX_ARRAY_PRINT(array, 10, % d);
    GX_ARRAY_REVERSE(array, 10, int);
    printf("\n");
    printf("After reverse:\n");
    GX_ARRAY_PRINT(array, 10, % d);

    char a = gx_array_compare(array, result, sizeof(int)*10);
    assert(a == 0);

    return 0;
}
