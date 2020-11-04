/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lweeper <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 16:02:10 by lweeper           #+#    #+#             */
/*   Updated: 2020/11/03 16:02:14 by lweeper          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*p;
	int		i;

	p = NULL;
	i = 0;
	if (s && f && (p = (char*)malloc(sizeof(char) * (ft_strlen(s) + 1))))
	{
		while (s[i])
		{
			p[i] = (*f)(i, s[i]);
			i++;
		}
		p[i] = '\0';
	}
	return (p);
}
