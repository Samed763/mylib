#include "libft.h"

void *ft_memcpy(void *dst, const void *src, size_t n) {
    size_t i = 0;

    if (dst == NULL || src == NULL)
        return NULL;

    while (i < n) {
        ((char *)dst)[i] = ((const char *)src)[i];
        i++;
    }
    return dst;
}
