#include "libft.h"
#include <stdio.h>

char	*ft_strdup(const char *s1)
{
	char	*s2;
	size_t	len;

	len = ft_strlen(s1);
	s2 = (char *)malloc(len + 1);
	if ((s2) == NULL)
		return (NULL);
	ft_memcpy(s2, s1, len + 1);
	return (s2);
}
