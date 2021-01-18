/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izouiten <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 14:24:38 by izouiten          #+#    #+#             */
/*   Updated: 2019/04/19 15:18:49 by izouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned	int	j;
	unsigned	int	i;
	size_t			k;

	if (dst)
	{
		k = ft_strlen(src);
		if ((int)size == 0)
			return (k);
		j = 0;
		while (src[j] != '\0')
			++j;
		i = 0;
		while (src[i] != '\0' && i < (size - 1))
		{
			dst[i] = src[i];
			++i;
		}
		dst[i] = '\0';
		return (j);
	}
	return (0);
}
