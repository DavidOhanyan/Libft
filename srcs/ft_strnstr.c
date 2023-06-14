/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohanyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 21:20:39 by dohanyan          #+#    #+#             */
/*   Updated: 2023/01/27 15:06:37 by dohanyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char	*haystack, const char	*needle, size_t len)
{
	size_t	i;
	size_t	c;
	char	*hay;

	i = 0;
	c = 0;
	hay = (char *)haystack;
	if (!haystack && len == 0)
		return (NULL);
	if (ft_strlen(needle) == 0 || haystack == needle)
		return (hay);
	while (hay[i] != '\0' && i < len)
	{
		while (hay[i + c] == needle[c] && hay[i + c] != '\0' && i + c < len)
		{
			c++;
		}
		if (needle[c] == '\0')
			return (hay + i);
		i++;
		c = 0;
	}
	return (NULL);
}
