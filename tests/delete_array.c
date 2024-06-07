#include <assert.h>

#include "gx_array.h"

int main(int argc, char const *argv[]) {
    int array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    gx_array_delete(array, sizeof(int) * 10, 5, sizeof(int));
    int result[10] = {0, 1, 2, 3, 4, 6, 7, 8, 9};
    GX_ARRAY_PRINT(array, 10, % d);

    int a = GX_ARRAY_COMPARE(array, result, 10);
    assert(a == 0);

    gx_array_delete(array, sizeof(int) * 10, 0, sizeof(int));
    int result1[10] = {1, 2, 3, 4, 6, 7, 8, 9};
    GX_ARRAY_PRINT(array, 10, % d);
     int b = GX_ARRAY_COMPARE(array, result1, 10);
    assert(b == 0);

    return 0;
}
