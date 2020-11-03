/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lweeper <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 20:40:32 by lweeper           #+#    #+#             */
/*   Updated: 2020/11/03 20:40:39 by lweeper          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *new_list;
	t_list *new_elem;

	if(lst == NULL || f == NULL || del == NULL)
		return (NULL);
	new_list = NULL;
	while(lst)
	{
		new_elem = ft_lstnew((*f)(lst->content));
		if (!new)
		{
			while(new_list)
			{
				new_elem = new_list->next;
				ft_lstclear(&new_list, del);
				new_list = new_elem;
			}
			lst = NULL;
			return (NULL);			
		}
		ft_lstaddback(&new_list, new_elem);
		lst = lst->next;		
	}
	return (new_list);
}