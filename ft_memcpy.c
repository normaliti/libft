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

void *ft_memcpy (void *restrict dest, const void *restrict src, size_t n)
{
	size_t i;
	
	i = 0;
	while (n > 0)
	{
		((unsigned char*)dest)[i] = ((unsigned char*)src)[i];
		i++;
		n--;
	}
	return (dest);
}
