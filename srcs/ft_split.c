/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohanyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 20:03:28 by dohanyan          #+#    #+#             */
/*   Updated: 2023/01/27 19:13:06 by dohanyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	*ft_free(char	**matrix, int j)
{
	int	i;

	i = 0;
	while (i < j)
	{
		free(matrix[i]);
		i++;
	}
	free(matrix);
	return (NULL);
}

static size_t	qanak(char const	*s, char c)
{
	size_t	i;
	size_t	word_count;

	i = 0;
	word_count = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			word_count++;
			while (s[i] != '\0' && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (word_count);
}

char	**ft_allocate_matrix(char const	*s, char c)
{
	int		count;
	char	**res;

	count = qanak(s, c);
	res = (char **)malloc(sizeof(char *) * (count + 1));
	return (res);
}

char	**ft_fill_matrix(char const	*s, char c, char	**res)
{
	int	i;
	int	j;
	int	start;
	int	end;

	i = 0;
	j = -1;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		end = i;
		if (end > start)
		{
			res[++j] = ft_substr(s, start, end - start);
			if (!res[j])
				return (ft_free(res, j - 1));
		}
	}
	res[++j] = NULL;
	return (res);
}

char	**ft_split(char const	*s, char c)
{
	char	**res;

	if (!s)
		return (NULL);
		res = ft_allocate_matrix(s, c);
	if (!res)
		return (NULL);
	return (ft_fill_matrix(s, c, res));
}
