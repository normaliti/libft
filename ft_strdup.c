/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lweeper <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 21:36:28 by lweeper           #+#    #+#             */
/*   Updated: 2020/02/12 21:36:31 by lweeper          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*str_dup;
	char	*p;

	str_dup = malloc(ft_strlen(src) + 1);
	p = str_dup;
	if (str_dup == NULL)
		return (NULL);
	while (*src)
		*p++ = *src++;
	*p = '\0';
	return (str_dup);
}
