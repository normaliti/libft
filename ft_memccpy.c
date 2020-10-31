/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lweeper <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 20:04:42 by lweeper           #+#    #+#             */
/*   Updated: 2020/10/28 20:05:08 by lweeper          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdlib.h>

void *ft_memccpy (void *restrict dest, const void *restrict src, int c, size_t n)
{
	size_t i;
	
	i = 0;
	while (n > 0)
	{
		if(((unsigned char*)src)[i]!= (unsigned char)c)
		{
			*((unsigned char*)dest) = ((unsigned char*)src)[i];
			dest++;
			i++;
			n--;
		}
		else
		{
			*((unsigned char*)dest) = ((unsigned char*)src)[i];
			dest++;
			return (dest);
		}
	}
	return (NULL);
}
