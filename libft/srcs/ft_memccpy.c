/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izouiten <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 20:07:24 by izouiten          #+#    #+#             */
/*   Updated: 2019/04/18 19:08:09 by izouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t len)
{
	unsigned char	*str1c;
	unsigned char	*str2c;
	int				i;

	i = 0;
	str1c = (unsigned char *)dest;
	str2c = (unsigned char *)src;
	while (i < (int)len)
	{
		str1c[i] = str2c[i];
		if (str2c[i] == (unsigned char)c)
		{
			return (str1c + i + 1);
		}
		i++;
	}
	return (NULL);
}
