/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lweeper <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 16:57:35 by lweeper           #+#    #+#             */
/*   Updated: 2020/11/04 16:57:38 by lweeper          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	print_number_fd(long int a, int fd)
{
	if (a > 9)
		print_number_fd(a / 10, fd);
	ft_putchar_fd(a % 10 + 48, fd);
}

void		ft_putnbr_fd(int n, int fd)
{
	long int long_int_nb;

	if (n >= 0)
		print_number_fd(n, fd);
	else
	{
		ft_putchar_fd('-', fd);
		long_int_nb = (long int)n;
		print_number_fd((-1) * long_int_nb, fd);
	}
}
