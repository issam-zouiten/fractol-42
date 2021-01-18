/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izouiten <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 15:15:18 by izouiten          #+#    #+#             */
/*   Updated: 2019/04/04 16:22:47 by izouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	res;
	char	*srcc;

	srcc = (char *)src;
	i = ft_strlen(dst);
	res = ft_strlen(srcc);
	if (size <= i)
		res += size;
	else
		res += i;
	j = 0;
	while (srcc[j] && (int)i + 1 < (int)size)
	{
		dst[i] = srcc[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (res);
}
