#ifndef __GX_ARRAY_H__
#define __GX_ARRAY_H__

#include <stdio.h>

#ifdef __cplusplus
extern C {
#endif

    /**
     * @brief Print item of array
     * @param ptr Array will be printed
     * @param len Length of the array
     * @param type_fmt Print format of the array (%c for charater, %d for integer, etc)
     */
#define GX_ARRAY_PRINT(ptr, len, type_fmt)   \
                                             \
    printf("[");                             \
    for (unsigned int i = 0; i < len; i++) { \
        printf(#type_fmt, ptr[i]);           \
        if (i < len - 1) {                   \
            printf(", ");                    \
        }                                    \
    }                                        \
    printf("]")

#define GX_ARRAY_REVERSE(ptr, len, type)         \
    for (unsigned int i = 0; i < len / 2; i++) { \
        type tmp = ptr[i];                       \
        ptr[i] = ptr[len - 1 - i];               \
        ptr[len - 1 - i] = tmp;                  \
    }

#define GX_ARRAY_REVERSE_COPY(ptr, ptr_result, len, type) \
    for (unsigned int i = 0; i < len; i++) {              \
        ptr_result[i] = ptr[len - 1 - i];                 \
    }

#define GX_ARRAY_COMPARE(ptr, ptr1, len)         \
    ({                                           \
        char r = 0;                              \
        for (unsigned int i = 0; i < len; i++) { \
            if (ptr[i] != ptr1[i]) r = 1;        \
        }                                        \
        r;                                       \
    })

#define GX_ARRAY_COMBINE(ptr1, ptr2, ptr_result, len1, len2) \
                                                             \
    ({                                                       \
        size_t max = len1 > len2 ? len1 : len2;              \
        for (size_t i = 0; i < max; i++) {                   \
            if (i < len1)                                    \
                ptr_result[i] = ptr1[i];                     \
            if (i < len2)                                    \
                ptr_result[i + len1] = ptr2[i];              \
        }                                                    \
    })

    typedef enum {
        CHAR,
        STR,
        INT,
        UINT,
        FLOAT,
        OCTAL,
        HEX,
        HEX_CAP,
        SCIENTIFIC,
        SHORT
    } ArrayType;

    /**
     * @brief Compare two array.
     * @param ptr Array 1.
     * @param ptr1 Array 2.
     * @param len Length of array in bytes.
     * @return unsigned char
     *
     * @note Return value `0` if all items in array 1 are same as items in array 2, otherwise return `1`. Compare array of string will compare the address of the strings (items).
     */
    extern inline unsigned char gx_array_compare(const void *ptr, const void *ptr1, size_t len);

    /**
     * @brief Combine two array into new array result;
     * @param ptr1 Array 1.
     * @param ptr2 Array 2.
     * @param ptr_res Array result.
     * @param len1 Length of array 1 in bytes.
     * @param len2 Length of array 2 in bytes.
     *
     * @note Length of the array result must be >= `len1` + `len2`
     */
    extern inline void gx_array_combine(const void *ptr1, const void *ptr2, void *ptr_res, size_t len1, size_t len2);

    void gx_array_insert(void *array, size_t len, size_t pos, void *data, size_t size);
    void gx_array_delete_at(void *array, unsigned int len, ArrayType type, unsigned int position);

#ifdef __cplusplus
}
#endif

#endif /* __GX_ARRAY_H__ */
