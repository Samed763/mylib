#include "libft.h"
#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
    size_t i;

    i = len;

    if (dst == src)
        return (dst);
    else if ((char *)dst > (char *)src)
    {
        while (i > 0)
        {
            i--;
            ((char *)dst)[i] = ((char *)src)[i];
        }
    }
    else
    {
        ft_memcpy(dst, src, len);
    }
    return (dst);
}

int main()
{
    char src[] = "Hello, World!";
    char dst[20];

    // Örneğin memmove fonksiyonunu test edelim
    printf("Önce: %s\n", src);
    ft_memmove(dst, src, 13); // 13 karakter kopyala
    printf("Sonra: %s\n", dst);

    // Kaydırma durumunu test etmek için
    char overlap[] = "Overlap Test";
    printf("Önce: %s\n", overlap);
    ft_memmove(overlap + 3, overlap, 8); // Kendi kendine kopyalama
    printf("Sonra: %s\n", overlap);

    return 0;
}
