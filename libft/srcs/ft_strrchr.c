/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izouiten <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 15:11:08 by izouiten          #+#    #+#             */
/*   Updated: 2019/04/04 16:09:40 by izouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*sc;

	sc = (char *)s;
	i = ft_strlen(sc);
	if (c == '\0')
		return (sc + i);
	while (i-- != 0)
	{
		if (sc[i] == c)
		{
			return (sc + i);
		}
	}
	return (0);
}
