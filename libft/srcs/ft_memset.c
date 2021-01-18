/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test4.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izouiten <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/30 12:54:37 by izouiten          #+#    #+#             */
/*   Updated: 2019/04/18 19:07:03 by izouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*bc;
	int				i;

	bc = (unsigned char *)b;
	i = 0;
	while (i < (int)len)
	{
		bc[i] = c;
		i++;
	}
	i++;
	return (b);
}
