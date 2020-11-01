/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lweeper <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 11:53:21 by lweeper           #+#    #+#             */
/*   Updated: 2020/02/10 11:53:26 by lweeper          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	unsigned long  num;
	int is_negative;
	int i;

	num = 0;
	is_negative = 1;
	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
	|| str[i] == '\r' || str[i] == '\v' || str[i] == '\f')
		i++;
	if (((str[i] == '+') || (str[i] == '-')) && (str[i++] == '-'))
			is_negative = -1;
	if (!(str[i] >= '0' && str[i] <= '9'))
		return (0);
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + str[i] - '0';
		if ((num > 2147483647 && is_negative == 1) ||
			(num > 2147483648 && is_negative == -1))
				return (is_negative == 1) ? (-1) : (0);
		i++;
	}
		return (is_negative * num);
}
