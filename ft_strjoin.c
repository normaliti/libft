/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lweeper <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 17:22:47 by lweeper           #+#    #+#             */
/*   Updated: 2020/10/30 17:22:55 by lweeper          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;
	int		i;
	
	i = 0;
	if(s1 == NULL || s2 == NULL)
		return (0);
	join = (char*)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if(join == NULL)
		return (NULL);
	while (*s1)
	{
		join[i] = *s1;
		i++;
		s1++;
	}
	while(*s2)
	{
		join[i]=*s2;
		i++;
		s2++;
	}
	join[i] = '\0';
	return (join);
}
