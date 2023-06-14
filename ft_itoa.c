/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohanyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 17:18:17 by dohanyan          #+#    #+#             */
/*   Updated: 2023/01/26 17:22:12 by dohanyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	digit_count(int n)
{
	int	len;

	len = 0;
	if (n < 0)
		len++;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static char	*zerocase(char *m)
{
	m = (char *)malloc(sizeof(char) * 2);
	m[0] = 0 + '0';
	m[1] = 0;
	return (m);
}

char	*ft_itoa(int n)
{
	char	*p;
	int		len;
	long	val;

	p = NULL;
	if (n == 0)
		return (zerocase(p));
	len = digit_count(n);
	p = (char *)malloc(sizeof(char) * (len + 1));
	if (!p)
		return (NULL);
	val = (long)n;
	if (val < 0)
	{
		p[0] = '-';
		val *= -1;
	}
	p[len] = '\0';
	len--;
	while (val != 0)
	{
		p[len--] = (val % 10) + '0';
		val /= 10;
	}
	return (p);
}
