#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*mem;
	size_t	i;

	start = 0;
	if (!s1 || !set)
		return (NULL);
	end = ft_strlen(s1);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	mem = (char *)malloc(end - start + 1);
	if (!mem)
		return (NULL);
	i = 0;
	while (start < end)
		mem[i++] = s1[start++];
	mem[i] = '\0';
	return (mem);
}
