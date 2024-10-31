/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadinc <sdinc763@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 14:05:34 by sadinc            #+#    #+#             */
/*   Updated: 2024/10/31 14:44:09 by sadinc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	intlen(int s)
{
	size_t	len;

	len = 0;
	if (s <= 0)
		len++;
	while (s)
	{
		s = s / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	size_t	len;
	char	*mem;
	long	num;

	len = intlen(n);
	mem = (char *)malloc(len + 1);
	if (!mem)
		return (NULL);
	mem[len] = '\0';
	num = n;
	if (n < 0)
	{
		mem[0] = '-';
		num = -num;
	}
	while (len-- && num > 0)
	{
		mem[len] = '0' + (num % 10);
		num = num / 10;
	}
	return (mem);
}
