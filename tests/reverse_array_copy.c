#include <assert.h>
#include <stdio.h>

#include "gx_array.h"

int main(int argc, char const *argv[]) {
    int array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int array_result[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    printf("Before reverse:\n");
    GX_ARRAY_PRINT(array, 10, % d);
    int array_copy[10];
    GX_ARRAY_REVERSE_COPY(array, array_copy, 10, int);
    printf("\n");
    printf("After copy reverse:\n");
    GX_ARRAY_PRINT(array_copy, 10, % d);

    int res = GX_ARRAY_COMPARE(array_result, array_copy, 10);
    assert(res == 0);

    return 0;
}
