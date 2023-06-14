/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohanyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 21:03:31 by dohanyan          #+#    #+#             */
/*   Updated: 2023/01/26 21:05:41 by dohanyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const	*s1, char const	*s2)
{
	size_t	s1_i;
	size_t	s2_i;
	char	*con;

	if (!s1 || !s2)
		return (NULL);
	s1_i = 0;
	s2_i = 0;
	con = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!con)
		return (NULL);
	while (s1[s1_i] != '\0')
	{
		con[s1_i] = s1[s1_i];
		s1_i++;
	}
	while (s2[s2_i] != '\0')
	{
		con[s1_i] = s2[s2_i];
		s1_i++;
		s2_i++;
	}
	con[s1_i] = '\0';
	return (con);
}
