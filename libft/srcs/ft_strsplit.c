/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izouiten <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/13 17:04:07 by izouiten          #+#    #+#             */
/*   Updated: 2019/04/23 01:55:27 by izouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static const char	*ft_str_next(const char *str, char c, int skip)
{
	if (skip)
		while (*str != '\0' && *str == c)
			str++;
	else
		while (*str != '\0' && *str != c)
			str++;
	return (str);
}

static int			get_nb_words(const char *str, char c)
{
	int				i;
	int				nb_word;
	int				car;
	int				word;

	i = 0;
	nb_word = 0;
	car = 1;
	word = 0;
	while (str[i])
	{
		if ((str[i] != c) && !word)
		{
			word = 1;
			car = 0;
			nb_word++;
		}
		if ((str[i] == c) && !car)
		{
			word = 0;
			car = 1;
		}
		i++;
	}
	return (nb_word);
}

static	char		**free_table(char **ret, int len)
{
	int				i;

	i = 0;
	while (i < len)
		free(ret[i]);
	free(ret);
	return (NULL);
}

char				**ft_strsplit(char const *str, char c)
{
	char			**ret;
	int				i;
	const char		*next;

	if (str == NULL)
		return (NULL);
	ret = (char**)malloc(sizeof(char*) * (get_nb_words(str, c) + 1));
	if (ret == NULL)
		return (NULL);
	i = 0;
	while (*str != '\0')
	{
		str = ft_str_next(str, c, 1);
		if (*str != '\0')
		{
			next = ft_str_next(str, c, 0);
			ret[i] = ft_strsub(str, 0, next - str);
			if (ret[i] == NULL)
				return (free_table(ret, i));
			i++;
			str = next;
		}
	}
	ret[i] = 0;
	return (ret);
}
