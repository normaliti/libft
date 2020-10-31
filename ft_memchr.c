/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lweeper <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 10:03:50 by lweeper           #+#    #+#             */
/*   Updated: 2020/10/29 10:03:54 by lweeper          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void* ft_memchr(const void* arr, int c, size_t n)
{
	size_t i;
	unsigned char a;
	
	i = 0;
	while (n > 0)
	{
		if (((unsigned char*)arr)[i] != (unsigned char)c)
		{
			i++;
			n--;
		}
		else
			return &((unsigned char*)arr)[i];
	}
	return (NULL);
}
