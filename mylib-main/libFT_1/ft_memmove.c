#include "libft.h"
#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

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

