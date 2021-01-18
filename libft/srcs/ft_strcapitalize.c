/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izouiten <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 02:44:15 by izouiten          #+#    #+#             */
/*   Updated: 2019/04/23 02:44:17 by izouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int i;
	int c;

	i = 0;
	c = 1;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' &&
					str[i] <= 'Z') || (str[i] >= '0' && str[i] <= '9'))
		{
			if (c == 1 && str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
			else if (c == 0 && str[i] >= 'A' && str[i] <= 'Z')
				str[i] += 32;
			c = 0;
		}
		else
			c = 1;
		i++;
	}
	return (str);
}
