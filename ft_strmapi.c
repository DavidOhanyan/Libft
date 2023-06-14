/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohanyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 21:15:13 by dohanyan          #+#    #+#             */
/*   Updated: 2023/01/26 21:17:55 by dohanyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const	*s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	val;

	if (!s || !f)
		return (NULL);
	val = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!str)
		return (NULL);
	while (s[val] != '\0')
	{
		str[val] = f(val, s[val]);
		val++;
	}
	str[val] = '\0';
	return (str);
}
