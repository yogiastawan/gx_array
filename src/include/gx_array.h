#ifndef GX_GX_ARRAY_H
#define GX_GX_ARRAY_H
#ifdef __cplusplus
extern C
{
#endif
    typedef enum
    {
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

    void gx_array_print(const void *array, unsigned int len, ArrayType type);
    void gx_array_reverse(void *array, unsigned int len, ArrayType type);
    void gx_array_insert(void *array, unsigned int len, ArrayType type, void *data);
    void gx_array_delete_at(void *array, unsigned int len, ArrayType type, unsigned int position);

#ifdef __cplusplus
}
#endif

#endif /* GX_GX_ARRAY_H */
