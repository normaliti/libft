/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lweeper <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 19:44:58 by lweeper           #+#    #+#             */
/*   Updated: 2020/10/29 19:45:02 by lweeper          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while ((*s1 || *s2) && n > 0)
	{
		if (*((unsigned char *)s1) == *((unsigned char *)s2))
		{
			s1++;
			s2++;
		}
		else
			return (*((unsigned char *)s1) - *((unsigned char *)s2));
		n--;
	}
	return (0);
}
