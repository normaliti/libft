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

void	*ft_memmove(void* dest, const void* src, size_t n)
{
	while (n > 0)
	{
		((unsigned char*)dest)[n - 1] = ((unsigned char*)src)[n - 1];
		n--;
	}
 return (dest);
}
