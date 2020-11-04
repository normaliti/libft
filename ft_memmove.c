/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lweeper <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 10:01:46 by lweeper           #+#    #+#             */
/*   Updated: 2020/10/29 10:01:50 by lweeper          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t i;

	i = 0;
	if (dest == NULL && src == NULL)
		return (0);
	while (n > 0)
	{
		if ((unsigned char*)src < (unsigned char*)dest)
			((unsigned char*)dest)[n - 1] = ((unsigned char*)src)[n - 1];
		else
		{
			((unsigned char*)dest)[i] = ((unsigned char*)src)[i];
			i++;
		}
		n--;
	}
	return (dest);
}
