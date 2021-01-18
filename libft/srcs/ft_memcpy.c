/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izouiten <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/30 13:52:26 by izouiten          #+#    #+#             */
/*   Updated: 2019/04/04 14:38:33 by izouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*str1c;
	char	*str2c;

	if (n == 0 || dest == src)
		return (dest);
	str1c = (char *)dest;
	str2c = (char *)src;
	while (n--)
	{
		*str1c++ = *str2c++;
	}
	return (dest);
}
