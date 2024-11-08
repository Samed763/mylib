/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadinc <sdinc763@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 16:48:43 by sadinc            #+#    #+#             */
/*   Updated: 2024/11/08 16:08:35 by sadinc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = len;
	if (!dst && !src && len)
		return (NULL);
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
