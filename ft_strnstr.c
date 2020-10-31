/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lweeper <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 18:26:36 by lweeper           #+#    #+#             */
/*   Updated: 2020/10/29 18:26:42 by lweeper          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

size_t	ft_strlen(const char *str);
int		ft_strncmp(const char *s1, const char *s2, size_t n);

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t needle_len;
	
	needle_len = ft_strlen(needle);
	while((len > needle_len) && *haystack)
	{
		if(!ft_strncmp(haystack, needle, needle_len))//если строки совпадают
			return ((char *)haystack);
		else
		{
			haystack++;
			len--;
		}
	}
	return (0);
}
