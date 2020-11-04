/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lweeper <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 17:27:26 by lweeper           #+#    #+#             */
/*   Updated: 2020/10/29 17:27:32 by lweeper          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int sym)
{
	const char *poz;

	poz = 0;
	while (*str)
	{
		if (*str == (char)sym)
			poz = str;
		str++;
	}
	if (sym == '\0')
		return ((char *)str);
	return ((char *)poz);
}
