/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izouiten <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/30 16:23:43 by izouiten          #+#    #+#             */
/*   Updated: 2019/04/18 19:16:05 by izouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1c;
	unsigned char	*str2c;
	size_t			i;

	str1c = (unsigned char *)s1;
	str2c = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (str1c[i] == str2c[i] && i < n - 1)
		i++;
	return (str1c[i] - str2c[i]);
}
