#include <assert.h>

#include "gx_array.h"

int main(int argc, char const *argv[]) {
    int array[10] = {0, 1, 2, 3, 4};
    int x = 10;
    gx_array_insert(array, sizeof(int) * 10, 5, &x, sizeof(int));
    int result[10] = {0, 1, 2, 3, 4, 10};
    GX_ARRAY_PRINT(array, 10, % d);

    int a = GX_ARRAY_COMPARE(array, result, 10);

    assert(a == 0);

    int x2 = 9;
    gx_array_insert(array, sizeof(int) * 10, 0, &x2, sizeof(int));
    int result2[10] = {9, 0, 1, 2, 3, 4, 10};
    GX_ARRAY_PRINT(array, 10, % d);

    int b = GX_ARRAY_COMPARE(array, result2, 10);

    assert(b == 0);

    return 0;
}
