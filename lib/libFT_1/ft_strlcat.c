/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadinc <sdinc763@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 16:24:09 by sadinc            #+#    #+#             */
/*   Updated: 2024/11/08 16:35:45 by sadinc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	dst_len;
	size_t	src_len;

	if (!dst || !src)
		return (0);
	i = 0;
	j = 0;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dstsize == 0 || dst_len >= dstsize)
		return (dstsize + src_len);
	while (dst[i] && i < dstsize - 1)
		i++;
	while (j < src_len && (i + j) < (dstsize - 1))
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = '\0';
	return (dst_len + src_len);
}
