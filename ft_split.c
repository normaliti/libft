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

int		ft_word_count(char const *str, char c)
{
	int	is_it_word;
	int words_num;
	int i;

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

int		s_len(char const *str, char c)
{
	int i;

	i = 0;
	while (str[i] != '\0' && str[i] != c)
		i++;
	return (i);
}

char	*ft_strncpy(char  *dest, char  const *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	if (i < n && src[i] == '\0')
	{
		while (dest[i] != '\0')
		{
			dest[i] = '\0';
			i++;
		}
	}
	dest[i] = '\0';
	return (dest);
}

char	**ft_split(char const *str, char c)
{
	int		tot_w;
	char	**arr;
	int		is_it_word;
	int		i;

	arr = (char **)malloc((ft_word_count(str, c) + 1) * sizeof(char *));
	is_it_word = 0;
	tot_w = 0;
	i = -1;
	while (str[++i] != '\0')
	{
		if (str[i] != c && is_it_word == 0)
		{
			is_it_word = 1;
			arr[tot_w] = (char *)malloc((s_len(&str[i], c) + 1) * sizeof(char));
			arr[tot_w] = ft_strncpy(arr[tot_w], &str[i], s_len(&str[i], c));
			tot_w++;
			i = i + s_len(&str[i], c) - 1;
		}
		else if (str[i] == c)
			is_it_word = 0;
		//i++;
	}
	arr[tot_w] = 0;
	return (arr);
}
