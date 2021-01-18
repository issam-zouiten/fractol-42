/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izouiten <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/18 21:54:11 by izouiten          #+#    #+#             */
/*   Updated: 2019/04/21 04:03:09 by izouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*frech;
	char	*str;

	if (s)
	{
		frech = (char *)malloc(sizeof(char) * len + 1);
		str = (char *)s;
		if (frech == NULL)
			return (NULL);
		ft_strncpy(frech, str + start, len);
		frech[len] = '\0';
		return (frech);
	}
	return (NULL);
}
