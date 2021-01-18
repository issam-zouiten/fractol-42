/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izouiten <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 16:25:14 by izouiten          #+#    #+#             */
/*   Updated: 2019/04/23 02:35:08 by izouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		i;
	int		j;
	char	*ha;
	char	*ne;

	ha = (char *)haystack;
	ne = (char *)needle;
	i = 0;
	if (ne[i] == '\0')
		return ((char *)ha);
	while (ha[i] && i < (int)len)
	{
		j = 0;
		while (ne[j] == ha[i + j] && (i + j) < (int)len)
		{
			j++;
			if (ne[j] == '\0')
				return (ha + i);
		}
		i++;
	}
	return (0);
}
