/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohanyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 17:43:54 by dohanyan          #+#    #+#             */
/*   Updated: 2023/01/27 21:04:20 by dohanyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*cdst;
	char	*csrc;
	int		i;

	if (!dst && !src)
		return (NULL);
	cdst = (char *)dst;
	csrc = (char *)src;
	i = (int)len - 1;
	if (dst > src)
	{
		while (i >= 0)
		{
			*(cdst + i) = *(csrc + i);
			i--;
		}
		return (dst);
	}
	else
		return (ft_memcpy(dst, src, len));
}
