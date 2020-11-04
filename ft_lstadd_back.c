/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lweeper <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 17:54:14 by lweeper           #+#    #+#             */
/*   Updated: 2020/11/04 17:54:17 by lweeper          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *tmp;
	t_list *p;

	if (!(*lst))
	{
		*lst = new;
		return ;
	}
	tmp = new;
	tmp->next = NULL;
	p = *lst;
	while (p->next)
		p = p->next;
	p->next = tmp;
}
