/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadinc <sdinc763@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 13:11:07 by omadali           #+#    #+#             */
/*   Updated: 2024/10/31 17:30:04 by sadinc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static void	free_malloc(char **f, int i)
{
	while (i-- > 0)
		free(f[i]);
}

static int	word_count(const char *str, char c)
{
	int	i;
	int	word;

	i = 0;
	word = 0;
	while (str[i])
	{
		if (str[i] == c)
			word++;
		i++;
	}
	return (word + 1);
}

static int	word_len(const char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static int	wordsave(char **f, char const *s, char c, int i)
{
	int	k;
	int	j;

	j = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			k = word_len(&s[i], c);
			f[j] = (char *)malloc(sizeof(char) * (k + 1));
			if (!f[j])
			{
				free_malloc(f, j);
				return (1);
			}
			k = 0;
			while (s[i] && s[i] != c)
				f[j][k++] = s[i++];
			f[j++][k] = '\0';
		}
		else
			i++;
	}
	f[j] = NULL;
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**f;
	int		a;
	int		i;

	i = 0;
	f = (char **)malloc(sizeof(char *) * (word_count(s, c) + 1));
	if (!f)
		return (NULL);
	a = wordsave(f, s, c, i);
	if (a != 0)
	{
		free(f);
		return (NULL);
	}
	return (f);
}

#include <stdio.h>

int	main(void)
{
	char	**result;
	char	str[] = "Hello World this is a test";
	char	delimiter;
	int		i;

	delimiter = ' ';
	result = ft_split(str, delimiter);
	if (!result)
	{
		printf("Memory allocation failed\n");
		return (1);
	}
	// Sonuçları yazdır
	i = 0;
	while (result[i])
	{
		printf("Word %d: %s\n", i, result[i]);
		free(result[i]); // Belleği serbest bırak
		i++;
	}
	free(result); // Dizi belleğini serbest bırak
	return (0);
}
