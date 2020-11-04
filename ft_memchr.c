/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lweeper <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 10:03:50 by lweeper           #+#    #+#             */
/*   Updated: 2020/10/29 10:03:54 by lweeper          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *arr, int c, size_t n)
{
	size_t i;

	i = 0;
	while (n > 0)
	{
		if (((char*)arr)[i] != c)
		{
			i++;
			n--;
		}
		else
			return (&((char*)arr)[i]);
	}
	return (NULL);
}
