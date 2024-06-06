#include <assert.h>

#include "gx_array.h"

int main(int argc, char const *argv[]) {
    int array[5] = {0, 1, 2, 3, 4};
    int array1[5] = {5, 6, 7, 8, 9};
    int res[10];
    int result[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    GX_ARRAY_COMBINE(array, array1, res, 5, 5);
    GX_ARRAY_PRINT(res, 10, % d);

    int a = GX_ARRAY_COMPARE(res, result, 10);

    assert(a == 0);
    
    return 0;
}
