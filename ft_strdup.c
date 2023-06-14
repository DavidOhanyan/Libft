/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohanyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 20:46:47 by dohanyan          #+#    #+#             */
/*   Updated: 2023/01/26 20:48:26 by dohanyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dub;
	size_t	len;

	len = ft_strlen(s1) + 1;
	dub = malloc(sizeof(char) * len);
	if (!dub)
		return (NULL);
	dub = ft_memcpy(dub, s1, len);
	return (dub);
}
