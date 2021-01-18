/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izouiten <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 16:07:51 by izouiten          #+#    #+#             */
/*   Updated: 2019/04/04 16:07:53 by izouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*sc;

	sc = (char *)s;
	i = 0;
	if (sc[i] == c)
		return (sc);
	while (sc[i++] != '\0')
	{
		if (sc[i] == c)
		{
			return (sc + i);
		}
	}
	return (NULL);
}
