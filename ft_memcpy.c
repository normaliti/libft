/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lweeper <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 18:36:51 by lweeper           #+#    #+#             */
/*   Updated: 2020/10/28 18:36:59 by lweeper          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy (void *dest, const void *src, size_t n)
{
	size_t i;
	int *ptr;
	
	ptr = 0;
	i = 0;
	if(dest == NULL && src == NULL)
		return (0);
	if (src == NULL || dest == NULL)
		*ptr = 1;
	while (n > 0)
	{
		((unsigned char*)dest)[i] = ((unsigned char*)src)[i];
		i++;
		n--;
	}
	return (dest);
}
