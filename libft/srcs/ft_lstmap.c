/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izouiten <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/21 01:23:27 by izouiten          #+#    #+#             */
/*   Updated: 2019/04/23 03:42:51 by izouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*head;
	t_list	*fresh;

	if (lst)
	{
		head = f(lst);
		if (head == NULL)
			return (NULL);
		fresh = head;
		while (lst->next)
		{
			lst = lst->next;
			fresh->next = f(lst);
			if (fresh->next == NULL)
				return (NULL);
			fresh = fresh->next;
		}
		return (head);
	}
	return (NULL);
}
