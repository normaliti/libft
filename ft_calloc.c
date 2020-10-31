/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lweeper <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 14:37:05 by lweeper           #+#    #+#             */
/*   Updated: 2020/10/30 14:37:08 by lweeper          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *b, size_t len);

void *ft_calloc(size_t count, size_t size)
{
	void *buf;
	buf = malloc(count * size);
	if (buf == NULL)
		return NULL;
	else
	{
		ft_bzero(buf, count * size);
		return (buf);
	}
}
