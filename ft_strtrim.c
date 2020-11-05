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

static int		get_start(char const *s1, char const *set)
{
	int		i;
	int		j;

	i = 0;
	while (s1[i] != '\0')
	{
		j = 0;
		while (set[j] != '\0')
		{
			if (s1[i] == set[j])
				break ;
			else if (set[j + 1] == '\0')
				return (i);
			else
				j++;
		}
		i++;
	}
	return (i);
}

static int		get_len(char const *s1, char const *set)
{
	int		i;
	int		j;

	i = ft_strlen(s1) - 1;
	while (i >= 0)
	{
		j = 0;
		while (set[j] != '\0')
		{
			if (s1[i] == set[j])
				break ;
			else if (set[j + 1] == '\0')
				return (i);
			else
				j++;
		}
		i--;
	}
	return (i);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		len;

	if (s1 == NULL)
		return (0);
	if (*set == '\0' || *s1 == '\0')
		return ((char*)s1);
	start = get_start(s1, set);
	if ((size_t)start == ft_strlen(s1))
		return (ft_substr("", 0, 1));
	else
		len = get_len(s1, set) - start + 1;
	return (ft_substr(s1, (unsigned int)start, (size_t)len));
}
