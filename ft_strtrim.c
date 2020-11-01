/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lweeper <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 18:39:37 by lweeper           #+#    #+#             */
/*   Updated: 2020/10/30 18:40:15 by lweeper          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*buf;
	char	*start;
	int i;
	
	//buf = (char*)malloc(ft_strlen(s1) + 1);
	//if(buf==NULL)
	//return (NULL);
	j = 0;
	while(*s1)
	{
		i = 0;
		while(set[i] != '\0')
		{
			if(*s1 == set[i])
				break;
			else
			{
				*buf = set[i];
				buf++;
				i++;
			}
		}
		s1++;
	}
	*buf = '\0';
	return (buf);
}
