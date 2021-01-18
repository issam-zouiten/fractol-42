/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izouiten <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/13 17:03:55 by izouiten          #+#    #+#             */
/*   Updated: 2019/04/13 17:18:45 by izouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(long n)
{
	int i;

	i = 1;
	if (n < 0)
	{
		n = n * (-1);
		i++;
	}
	while (n >= 10)
	{
		i++;
		n /= 10;
	}
	return (i);
}

char		*ft_itoa(int n)
{
	int		i;
	long	x;
	char	*tab;

	x = (long)n;
	i = ft_len(x);
	if (!(tab = (char *)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	tab[i] = '\0';
	if (x < 0)
	{
		tab[0] = '-';
		x = x * (-1);
	}
	else if (x == 0)
	{
		tab[0] = x + '0';
	}
	while (x > 0)
	{
		tab[i - 1] = (x % 10) + '0';
		x /= 10;
		i--;
	}
	return (tab);
}
