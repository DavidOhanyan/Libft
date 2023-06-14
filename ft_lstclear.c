/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohanyan <dohanyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 20:46:01 by dohanyan          #+#    #+#             */
/*   Updated: 2023/02/03 21:46:07 by dohanyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list	**lst, void (*del)(void*))
{
	t_list	*rem;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		rem = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = rem;
	}
	*lst = 0;
}
