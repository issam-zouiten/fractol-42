/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izouiten <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/13 17:19:31 by izouiten          #+#    #+#             */
/*   Updated: 2019/04/23 02:37:06 by izouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
	int		cp;
	int		i;
	char	p;

	i = ft_strlen(str);
	cp = 0;
	while (cp <= --i)
	{
		p = str[cp];
		str[cp] = str[i];
		str[i] = p;
		cp++;
	}
	return (str);
}
