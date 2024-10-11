/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmuhlbau <kmuhlbau@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 21:36:27 by kmuhlbau          #+#    #+#             */
/*   Updated: 2024/10/10 23:03:26 by kmuhlbau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*next;
	t_list	*start;

	start = lst;
	while (lst)
	{
		lst->content = (*f)(lst->content);
		lst = lst->next;
	}
	new_list = ft_lstnew(start->content);
	start = start->next;
	while (start)
	{
		ft_lstadd_back(&new_list, ft_lstnew(start->content));
		next = start->next;
		(*del)(start);
		start = next;
	}
	return (new_list);
}
