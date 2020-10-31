/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lweeper <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 16:10:15 by lweeper           #+#    #+#             */
/*   Updated: 2020/10/30 16:10:23 by lweeper          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char *ft_substr(char const  *s, unsigned int start, size_t n)
{
	char *buf;
	int i;
	
	i = 0;
	buf = (char *)malloc(n - start + 2);
	if (buf == NULL)
		return NULL;
	else
	{
		while( n > 0 && s[start] != '\0')
		{
			buf[i] = s[start];
			start++;
			i++;
			n--;
		}
		buf[i] = '\0';
	}
	return (buf);
}
