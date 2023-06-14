/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohanyan <dohanyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 20:48:57 by dohanyan          #+#    #+#             */
/*   Updated: 2023/02/03 21:03:21 by dohanyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list	*lst, void *(*f)(void *), void(*del)(void *))
{
	t_list	*one_list;
	t_list	*sec_list;

	if (!lst)
		return (0);
	one_list = 0;
	while (lst)
	{
		sec_list = ft_lstnew(f(lst->content));
		if (!sec_list)
		{
			ft_lstclear(&one_list, del);
			return (0);
		}
		ft_lstadd_back(&one_list, sec_list);
		lst = lst->next;
	}
	return (one_list);
}
