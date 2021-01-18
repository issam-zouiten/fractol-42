/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izouiten <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 15:32:41 by izouiten          #+#    #+#             */
/*   Updated: 2019/04/18 19:10:06 by izouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int				p;
	int				f;
	unsigned char	*ha;
	unsigned char	*ne;

	p = 0;
	ha = (unsigned char *)haystack;
	ne = (unsigned char *)needle;
	if (ne[p] == '\0')
		return ((char *)ha);
	while (ha[p])
	{
		f = 0;
		while (ne[f] == ha[p + f] && ne[f])
			f++;
		if (ne[f] == '\0')
			return ((char *)ha + p);
		p++;
	}
	return (0);
}
