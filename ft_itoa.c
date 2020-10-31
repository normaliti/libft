#include "libft.h"

int	ft_get_size(int n)
{
	int	i;
	long int nbr;

	if(n < 0)
	{
		nbr = (-1)*n;
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

char *ft_itoa(int n)
{
	int		size;
	char		*res;
	long int	nbr;

	nbr = n;
	size = ft_get_size(n);
	if(!(res = malloc(size + 1)))
		return (NULL);
	res[size--] = '\0';
	if(n < 0)
	{
		nbr = (-1)*n;
		res[0]='-';
	}
	while (nbr)
	{
		res[size--] = 48 + nbr % 10;
		nbr = nbr / 10;
	}
	return (res);
}
