/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lweeper <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 17:23:40 by lweeper           #+#    #+#             */
/*   Updated: 2020/11/04 17:23:43 by lweeper          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list *elem;

	if (!lst)
		return (NULL);
	elem = lst;
	while (elem->next)
	{
		elem = elem->next;
	}
	return (elem);
}
