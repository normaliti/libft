/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lweeper <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 10:08:30 by lweeper           #+#    #+#             */
/*   Updated: 2020/10/29 10:08:34 by lweeper          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *tmp1;
	unsigned char *tmp2;
	
	tmp1 = s1;
	tmp2 = s2;
	
	while((*tmp1 || *tmp2) && n > 0)
	{
		if(*tmp1 == *tmp2)
		{
			tmp1++;
			tmp2++;
			n--;
		}
		else
			return (*tmp1 - *tmp2);
	}
	return 0;
}
