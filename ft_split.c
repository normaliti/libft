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

int		ft_word_count(char const *s, char c)
{
	int	state;
	int	word_count;

	state = 0;
	word_count = 0;
	while (*s)
	{
		if(*s == c)
		{
			state = 0;
			s++;
		}
		else if (state == 0)
		{
			state = 1;
			word_count++;
			s++;
		}
		else
			s++;
	}
	return (word_count);
}


char	**ft_split(char const *s, char c)
{
	char		**res;
	char set[1];
	set[0] = c;
	char const *trim_s = ft_strtrim(s, set);

	int			len;

	len = ft_word_count(trim_s, c);
	printf("word count is %d", len);
	res = malloc(sizeof(char *) * (len + 1));

	res[len] = NULL;
	return (res);

}
