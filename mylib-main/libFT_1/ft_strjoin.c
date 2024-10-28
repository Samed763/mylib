#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*mem;

	i = 0;
	j = 0;
	mem = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!mem)
		return (NULL);
	while (s1[i])
	{
		mem[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		mem[i + j] = s2[j];
		j++;
	}
	mem[i + j] = '\0';
	return (mem);
}
