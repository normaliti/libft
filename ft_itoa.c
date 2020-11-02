/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lweeper <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 14:57:34 by lweeper           #+#    #+#             */
/*   Updated: 2020/11/02 14:57:45 by lweeper          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_get_size(int n)
{
	int				i;
	unsigned int	nbr;

	if (n < 0)
	{
		nbr = (-1) * n;
		i = 2;
	}
	else
	{
		i = 1;
		nbr = n;
	}
	while (nbr > 9)
	{
		nbr = nbr / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int				size;
	char			*res;
	unsigned int	nbr;
	int				ind;

	nbr = n;
	size = ft_get_size(n);
	if (!(res = malloc(sizeof(char) * (size + 1))))
		return (NULL);
	if (n < 0)
		nbr = (-1) * n;
	ind = size - 1;
	while (ind >= 0)
	{
		res[ind--] = 48 + nbr % 10;
		nbr = nbr / 10;
	}
	res[size] = '\0';
	if (n < 0)
		res[0] = '-';
	return (res);
}
