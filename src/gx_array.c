#include "gx_array.h"

unsigned char gx_array_compare(const void *ptr, const void *ptr1, size_t len) {
    for (size_t i = 0; i < len; i++) {
        if (((char *)ptr)[i] != ((char *)ptr1)[i]) return 1;
    }
    return 0;
}

void gx_array_combine(const void *ptr1, const void *ptr2, void *ptr_res, size_t len1, size_t len2) {
    size_t max = len1 > len2 ? len1 : len2;
    for (size_t i = 0; i < max; i++) {
        if (i < len1) {
            ((char *)ptr_res)[i] = ((char *)ptr1)[i];
        }

        if (i < len2) {
            ((char *)ptr_res)[i + len1] = ((char *)ptr2)[i];
        }
    }
}

void gx_array_insert(void *array, size_t len, size_t pos, void *data, size_t size) {
    size_t i = 0;
    for (i = len - 1; i >= (pos + 1) * size; i--) {
        ((char *)array)[i] = ((char *)array)[i - size];
    }

    for (i = 0; i < size; i++) {
        ((char *)array)[(pos * size) + i] = ((char *)data)[i];
    }
}