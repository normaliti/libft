/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lweeper <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 15:54:37 by lweeper           #+#    #+#             */
/*   Updated: 2020/11/02 15:54:41 by lweeper          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_word_count(char const *str, char c)
{
	int		is_it_word;
	int		words_num;
	int		i;

	is_it_word = 0;
	words_num = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] != c && is_it_word == 0)
		{
			words_num = words_num + 1;
			is_it_word = 1;
		}
		else if (str[i] == c)
		{
			is_it_word = 0;
		}
		i++;
	}
	return (words_num);
}

char static		*ft_alloc_word(char const *s, char c)
{
	int		size;
	char	*tab;

	size = 0;
	tab = 0;
	while (s[size] && s[size] != c)
		size++;
	if (!(tab = (char *)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	ft_strlcpy(tab, s, size + 1);
	return (tab);
}

char			**ft_split(char const *s, char c)
{
	int		count;
	int		words;
	char	**res;

	count = -1;
	if (!s)
		return (NULL);
	words = ft_word_count(s, c);
	if (!(res = malloc(sizeof(char *) * (words + 1))))
		return (NULL);
	while (++count < words)
	{
		while (*s == c)
			s++;
		if (!(res[count] = ft_alloc_word(s, c)))
		{
			while (count > 0)
				free(res[count--]);
			free(res);
			return (NULL);
		}
		s += ft_strlen(res[count]);
	}
	res[count] = 0;
	return (res);
}
