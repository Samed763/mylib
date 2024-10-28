#include <stdio.h>
#include <string.h>
#include "libft.h"
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t i = 0;
    size_t j = 0;
    while (dst[i] && i < dstsize) 
        i++;
    
    while(dstsize > i + j + 1 && src[j])
    {
        dst[i + j] = src[j];
        j++;
    } 
    dst[i + j] = '\0';
    return i+ft_strlen(src);
}

