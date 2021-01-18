/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izouiten <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/30 15:54:58 by izouiten          #+#    #+#             */
/*   Updated: 2019/04/18 19:08:46 by izouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str1c;
	int				i;

	str1c = (unsigned char *)s;
	i = 0;
	while (i < (int)n)
	{
		if (str1c[i] == (unsigned char)c)
		{
			return (str1c + i);
		}
		i++;
	}
	return (NULL);
}
